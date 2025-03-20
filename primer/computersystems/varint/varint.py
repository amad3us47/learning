import struct
with open('1.uint64','rb') as f:
    print(struct.unpack('>Q',f.read()))



