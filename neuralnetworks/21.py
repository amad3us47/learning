import numpy as np

layer_outputs = np.array([[4.8, 1.21, 2.385],
                          [8.9, -1.81, 0.2],
                          [1.41, 1.051, 0.026]])

print(layer_outputs)
print('sum when axis = 1 or one column all the rows elements will be added')
print(np.sum(layer_outputs,axis=1))

