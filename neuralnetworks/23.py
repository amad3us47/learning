import numpy as np


class Activation_Softmax:
    def forward(self,inputs):
        exp_values = np.exp(inputs-np.max(inputs,axis=1,keepdims=True))
        probabilities = exp_values/np.sum(exp_values,axis=1,keepdims=True)
        self.output=probabilities

softmax=Activation_Softmax()

softmax.forward([[1,2,3]])

#print(softmax.output)
num=[]
num.append(softmax.output)
print(num)
