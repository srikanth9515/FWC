import numpy as np
import matplotlib.pyplot as plt
from numpy import linalg as LA
import math

def circ_gen(O,r):
 len = 50
 theta = np.linspace(0,2*np.pi,len)
 x_circ = np.zeros((2,len))
 x_circ[0,:] = r*np.cos(theta)
 x_circ[1,:] = r*np.sin(theta)
 x_circ = (x_circ.T + O).T
 return x_circ
 
 
c = np.array([1,1])
r = 0.5

##Generating the circle
x_circ= circ_gen(c,r)

#Plotting the circle
plt.plot(x_circ[0,:],x_circ[1,:],label='$Circle$')
#Labeling the coordinates
tri_coords = np.vstack((c))
plt.scatter(tri_coords[0],tri_coords[1])

vert_labels = ['c']
for i, txt in enumerate(vert_labels):
    label = "{}({:.0f},{:.0f})".format(txt, tri_coords[0,i],tri_coords[1,i]) #Form label as A(x,y)
    plt.annotate(label, # this is the text
            (tri_coords[0,i], tri_coords[1,i]), # this is the point to label
                 textcoords="offset points", # how to position the text
                xytext=(0,10), # distance from text to points (x,y)
                ha='center') # horizontal alignment can be left, right or center

plt.xlabel('$x-axis$')
plt.ylabel('$y-axis$')
plt.legend(loc='best')
plt.grid() # minor
plt.axis('equal')
#plt.savefig('/sdcard/Download/latexfiles/circle/figs/circ1.png')
plt.show()
