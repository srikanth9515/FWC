
import numpy as np
import matplotlib.pyplot as plt


def line_gen(A,B):
   len =10
   dim = A.shape[0]
   x_AB = np.zeros((dim,len))
   lam_1 = np.linspace(0,1,len)
   for i in range(len):
     temp1 = A + lam_1[i]*(B-A)
     x_AB[:,i]= temp1.T
   return x_AB


A=np.loadtxt('a.dat')
B=np.loadtxt('b.dat')  #loading a matrix dat file 
C=np.loadtxt('c.dat')
D=np.loadtxt('d.dat')

x_AB = line_gen(A,B)
x_BC= line_gen(B,C)
x_CD = line_gen(C,D)
x_DA= line_gen(D,A)

#
#
#Plotting all lines
plt.plot(x_AB[0,:],x_AB[1,:],label='$AB=CD$')
plt.plot(x_BC[0,:],x_BC[1,:])#,label='$Diameter$')
plt.plot(x_CD[0,:],x_CD[1,:])
plt.plot(x_DA[0,:],x_DA[1,:])
#
#
#Labeling the coordinates
tri_coords = np.vstack((A,B,C,D)).T
plt.scatter(tri_coords[0,:], tri_coords[1,:])
vert_labels = ['A''(1,2)','B''(4,3)','C''(6,6)','D''(3,5)']
for i, txt in enumerate(vert_labels):
    plt.annotate(txt, # this is the text
                 (tri_coords[0,i], tri_coords[1,i]), # this is the point to label
                 textcoords="offset points", # how to position the text
                 xytext=(0,10), # distance from text to points (x,y)
                 ha='center') # horizontal alignment can be left, right or center

plt.xlabel('$x$')
plt.ylabel('$y$')
plt.legend(loc='best')
plt.grid() # minor
plt.axis('equal')

#if using termux
#plt.savefig('/home/srikanth/vectore/par.pdf')
#subprocess.run(shlex.split("termux-open '/storage/emulated/0/github/cbse-papers/2020/math/10/solutions/figs/matrix-10-5.pdf'")) 
#else
plt.show()
