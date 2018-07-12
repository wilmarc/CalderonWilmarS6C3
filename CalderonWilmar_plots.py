import numpy as np
import matplotlib.pyplot as plt

d=np.genfromtxt("plot.txt", delimiter=" ")
x,y = d[:,0],d[:,1]

plt.figure()
plt.plot(x,y)
#plt.savefig("uuu.pdf")
plt.show()
