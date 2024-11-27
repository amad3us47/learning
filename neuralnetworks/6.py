import numpy as np # we can use any word(np) after "as" but use the same thing in after that it minimizes the word size 

inputs=[1.0,2.0,3.0,2.5]
weights=[0.2,0.8,-0.5,1.0]

bias=2.0

output=np.dot(weights,inputs)+bias

print(output)
