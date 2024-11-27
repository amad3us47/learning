import numpy as np

a=[1,2,3]
b=[2,3,4]

a=np.array([a]) # (1 x 3)
b=np.array([b]).T # (3 x 1)  transposing the matrix for correct dimensions 
print(np.dot(a,b))  # result is in (1 X 1)
