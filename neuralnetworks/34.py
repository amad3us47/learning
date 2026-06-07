import matplotlib.pyplot as plt
import numpy as np

def f(x):
    return 2*x**2

# making the slope and function smooth
x=np.arange(0,5,0.001)
y=f(x)

print(x)
print(y)

plt.plot(x,y)
plt.show()
