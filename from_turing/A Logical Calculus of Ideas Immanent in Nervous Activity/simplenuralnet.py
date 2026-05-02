import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
import tensorflow as tf

orLogic= {"x1":[0,0,1,1],"x2":[0,1,0,1],"y":[0,1,1,1]}
andLogic= {"x1":[0,0,1,1],"x2":[0,1,0,1],"y":[0,0,0,1]}
xorLogic = {"x1":[0,0,1,1],"x2":[0,1,0,1],"y":[0,1,1,0]}
Dor=pd.DataFrame(data=orLogic)
Dand=pd.DataFrame(data=andLogic)
Dxor=pd.DataFrame(data=xorLogic)
print(Dor)
print(Dand)
print(Dxor)

model = tf.keras.models.Sequential([
    tf.keras.layers.Dense(16,input_dim=2,activation='relu'),
    tf.keras.layers.Dense(8,activation='relu'),
    tf.keras.layers.Dense(1,activation='sigmoid')
    ])

model.compile(optimizer='adam',
              loss='mean_squared_error',
              metrics=['binary_accuracy'])

x_or=Dor[["x1","x2"]]
y_or=Dor["y"]

model.fit(x_or,y_or,epochs=250)

x_test = Dor[["x1","x2"]]
print(model.predict(x_test).round())
