import numpy as np
import matplotlib.pyplot as plt
import os

os.system ("g++ VelasquezJuan_final_15.cpp")
os.system ("./a.out")

a = np.loadtxt("datos.dat")

plt.figure(figsize = (15,10))
plt.plot(a[:,1],a[:,2])
plt.xlabel("Posición[x]")
plt.ylabel("Posicion[y]")
plt.title("Partícula cargada en campo eléctrico [Leapfrog]")
plt.savefig("VelasquezJuan_final_15.png")


