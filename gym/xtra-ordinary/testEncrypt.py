#!/usr/bin/env python3

from random import randint

with open('flag2.txt', 'rb') as f:
    flag = f.read()

with open('secret-key-2.txt', 'rb') as f:
    key = f.read()

def encrypt(ptxt, key):
    ctxt = b''
    for i in range(len(ptxt)):
        print("This is i Iteration: "+ i)
        a = ptxt[i]
        print("This is a: "+ i)
        b = key[i % len(key)]
        ctxt += bytes([a ^ b])
    return ctxt

ctxt = encrypt(flag, key)
print(ctxt)
print("\x11\x08")
print("\x70\x69\x63\x6f\x43\x54\x46")
print(b'my encryption method')