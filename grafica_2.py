import matplotlib.pyplot as plt
import numpy as np

datos = np.loadtxt('RK4_sOrd.txt')
x = datos[:,0]
y = datos[:,1]
y2 = np.cos(x)
error = np.absolute((y-y2))

plt.figure()
plt.semilogy(x,error)
plt.savefig('RK_sO.pdf')

plt.figure()
plt.plot(x,y)
plt.savefig('cos.png')
