import numpy as np
import matplotlib.pyplot as plt
from numpy import linalg as LA
import subprocess
import shlex
import math

def line_dir_pt(m,A,k1,k2): 
  len = 10 
  dim = A.shape[0] 
  x_AB = np.zeros((dim,len)) 
  lam_1 = np.linspace(k1,k2,len) 
  for i in range(len): 
    temp1 = A + lam_1[i]*m 
    x_AB[:,i]= temp1.T 
  return x_AB

#Input parameters
A = np.loadtxt('a.dat',dtype='float') 
D = np.loadtxt('d.dat',dtype='float') 
m = np.loadtxt('n.dat',dtype='float')

##Generating the line 
k1=-0.5
k2=0.5
x_AB = line_dir_pt(m,A,k1,k2)
x_CD = line_dir_pt(m,D,k1,k2)

 

#Plotting all lines
plt.plot(x_AB[0,:],x_AB[1,:],label='Line equation')
plt.plot(x_CD[0,:],x_CD[1,:],label='Line equation')


plt.xlabel('$x$')
plt.ylabel('$y$')
plt.legend(loc='best')
plt.grid() # minor
plt.axis('equal')

#if using termux
#plt.savefig('/sdcard/matrix/code/fig.pdf')
#subprocess.run(shlex.split("termux-open /sdcard/matrix/code/fig.pdf"))
#else
plt.show()
