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

#