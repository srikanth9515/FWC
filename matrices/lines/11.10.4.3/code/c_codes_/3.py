
import numpy as np 
import mpmath as mp 
import math as ma 
import matplotlib.pyplot as plt 
from numpy import linalg as LA 
 
 
def line_dir_pt(m,A,k1,k2):  
  len = 10  
  dim = A.shape[0]  
  x_AB = np.zeros((dim,len))  
  lam_1 = np.linspace(k1,k2,len)  
  for i in range(len):  
    temp1 = A + lam_1[i]*m  
    x_AB[:,i]= temp1.T  
  return x_AB
def line_gen(A,B):
  len =10
  dim = A.shape[0]
  x_AB = np.zeros((dim,len))
  lam_1 = np.linspace(0,1,len)
  for i in range(len):
    temp1 = A + lam_1[i]*(B-A)
    x_AB[:,i]= temp1.T
  return x_AB
 
A=  np.loadtxt("A.dat");
B=  np.loadtxt("B.dat");
C=  np.loadtxt("C.dat");
D=  np.loadtxt("D.dat");
print(A)
print(B)
print(C)
print(D)
x_AB = line_gen(A,B) 
x_CD = line_gen(D,C) 
 
  
 
#Plotting all lines 
plt.plot(x_AB[0,:],x_AB[1,:],label='(-2 3)x=6') 
plt.plot(x_CD[0,:],x_CD[1,:],label='(-3 -2)x=6') 
 
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
