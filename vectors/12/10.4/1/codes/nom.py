import numpy as np
import matplotlib.pyplot as plt
from numpy import linalg as LA
import math
A=np.array([1,-7,7])
B=np.array([3,-2,2])
C=np.linalg.norm(A*B)
#C=sqrt(0**2+19**2+19**2)
print(C)
def line_gen(A,B):
  len =10
  dim = A.shape[0]
  x_AB = np.zeros((dim,len))
  lam_1 = np.linspace(0,1,len)
  for i in range(len):
    temp1 = A + lam_1[i]*(B-A)
    x_AB[:,i]= temp1.T
  return x_AB
x_AB = line_gen(A,B)
plt.plot(x_AB[0,:],x_AB[1,:])#,label='$Diameter$')
tri_coords = np.vstack((A,B)).T
plt.scatter(tri_coords[0,:], tri_coords[1,:])
vert_labels = ['A''(1,-7,7)','B''(3,-2,2)']
for i, txt in enumerate(vert_labels):
    plt.annotate(txt, # this is the text
                 (tri_coords[0,i], tri_coords[1,i]), # this is the point to label
                 textcoords="offset points", # how to position the text
                 xytext=(0,10), # distance from text to points (x,y)
                 ha='center') # horizontal alignment can be left, right or center
plt.xlabel('$x$')
plt.ylabel('$y$')
#plt.legend(loc='best')
plt.grid() # minor
plt.axis('equal')

#if using termux
plt.savefig('/home/srikanth/collinear/nom.pdf')
#subprocess.run(shlex.split("termux-open '/sdcard/Download/c2_fwc/trunk/line_assignment/docs/line.pdf'")) 
#else
plt.show()

