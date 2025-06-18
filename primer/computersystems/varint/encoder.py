import struct
def encode(n):
    """
    - in a loop:
        take loweest order 7 bits
        add the correct msb: 1 unless final 7 bits 
        push to some sequence of bytes
        reduce n by 7 bits
    return byte sequence
    """
    out = []
    while n > 0:
        n % 128 #TODO bitmask for possible speed 
        #TODO add msb
        out.append(part)
        b >>= 7
    return bytes(out)

with open('150.uint64','rb') as f:
    print(struct.unpack('>Q',f.read())[0])
    print(encode(n))
