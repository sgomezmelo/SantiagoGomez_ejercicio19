import matplotlib.pyplot as plt
import numpy as np

datos = np.loadtxt('RK4.txt')
x = datos[:,0]
y = datos[:,1]
y2 = np.exp(-x)
error = np.absolute(y-y2)/y2

plt.figure()
plt.semilogy(x,error)
plt.savefig('RK_pO.pdf')
