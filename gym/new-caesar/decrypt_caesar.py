#import string library
import string

# constants
LOWERCASE_OFFSET = ord("a")
ALPHABET = string.ascii_lowercase[:16]

# decode function
def b16_decode(cipher):
    dec = ""

    #loop through the cipher 2 characters at a time
    for c in range(0, len(cipher), 2):
        #turn the two characters into one binary string
        b = ""
        b +=  "{0:b}".format(ALPHABET.index(cipher[c])).zfill(4)
        b +=  "{0:b}".format(ALPHABET.index(cipher[c+1])).zfill(4)
        #turn the binary string to a character and add
        dec += chr(int(b,2))

    #return
    return dec

#unshift the text
def unshift(c, k):
    t1 = ord(c) - LOWERCASE_OFFSET
    t2 = ord(k) - LOWERCASE_OFFSET
    return ALPHABET[(t1 - t2) % len(ALPHABET)]

# encrypted flag
enc = "mlnklfnknljflfmhjimkmhjhmljhjomhmmjkjpmmjmjkjpjojgjmjpjojojnjojmmkmlmijimhjmmj"

# loop through all possible keys
for key in ALPHABET:
    # initialize string
    s = ""

    #loop through the encrypted text
    for i,c in enumerate(enc):
        #unshift it based on key
        s += unshift(c, key[i % len(key)]) 

    #decode
    s = b16_decode(s)

    #print key
    print(s)