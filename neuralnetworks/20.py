import numpy as np

layer_outputs = np.array([[4.8, 1.21, 2.385],
                          [8.9, -1.81, 0.2],
                          [1.41, 1.051, 0.026]])

print(layer_outputs)
print('sum when axis = 0 or one row all the columns elements will be added')
print(np.sum(layer_outputs,axis=0))

