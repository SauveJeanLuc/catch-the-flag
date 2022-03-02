#function-name: caesar_encrypt
#accepts: text[String] -> Text to encrypt
#returns: result[String] -> Encrypted text
#role: encrypt
from unittest import result


def caesar_encrypt(text):
    # variable-name: result
    # variable-role: store encrypted text
    result = ""
    # Go through each character of the text using for loop
    for i in range(len(text)):
        # Obtain the ASCII value using ord
        char_position = ord(text[i])
        # Add 3 to the position
        new_char_position = char_position + 3
        new_char_position = new_char_position % 123
        #convert ASCII value to character and concatenate it to final result
        result = result + chr(new_char_position)
        print(result)
    return result

def caesar_decrypt(cipher_text):
    # variable-name: result
    # variable-role: store decrypted text
    result = ""
    # Go through each character of the text in this for loop
    for i in range(len(cipher_text)):
        # Obtain the ASCII value using ord
        char_position = ord(cipher_text[i])
        # Subtract 3 to the position, to get back original position
        new_char_position = char_position - 3
        new_char_position = new_char_position % 123
        # Convert ASCII value to character and concatenate it to final result
        result = result + chr(new_char_position)
        print(result)
    return result
text = "picoctf"
print(f"Plain Text: {text}")
cipher_text = caesar_encrypt(text)
print(f"Encrypted: {cipher_text}")
print(f"Encrypted: {caesar_decrypt(cipher_text)}")
