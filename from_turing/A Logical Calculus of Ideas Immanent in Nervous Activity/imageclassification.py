import pandas as pd
import numpy as np
import tensorflow as tf

def convert_img():




model = tf.keras.models.Sequential([
    tf.keras.layers.Dense(16,input_dim=2,activation='relu'),
    tf.keras.layers.Dense(8,activation='relu'),
    tf.keras.layers.Dense(1,activation='sigmoid')
    ])

model.compile(optimizer='adam',
              loss='mean_squared_error',
              metrics=['binary_accuracy'])


if __name__=="__main__":

