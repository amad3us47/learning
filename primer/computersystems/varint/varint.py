import struct

out=[]

def encode(n):
    while n>0:
        part=n%128 #TODO bitmask for possible speed
        #TODO add msb
        n>>=7
        if n>0:
            part+0x80
        out.append(part)
    return bytes(out)


def decode(varn):
    n=0
    for b in reversed(varn):
        n <<=7
        n |= (b & 0x7f)

    return n


if __name__=="__main__":
    cases=(
    ('1.uint64',b'\x01'),
    ('150.uint64',b'\x96\x01'),
    ('maxint.uint64,b',b'\xff\xff\xff\xff\xff\xff\xff\xff\x01'),
    )

    for fname,expectation in cases:
        with open(fname,'rb') as f:
            n=struct.unpack('>Q',f.read())[0]
            assert encode(n)==expectation
            #assert decode(encode(n)) == expectation
print("ok")



