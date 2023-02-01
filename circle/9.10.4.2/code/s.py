import numpy as np
import matplotlib.pyplot as plt
import math
def line_gen(A,B):
  len =10
  dim = A.shape[0]
  x_AB = np.zeros((dim,len))
  lam_1 = np.linspace(0,1,len)
  for i in range(len):
    temp1 = A + lam_1[i]*(B-A)
    x_AB[:,i]= temp1.T
  return x_AB

r=1
P=np.array([np.sqrt(3)/2,0.5])
Q=np.array([0.3878,-0.9217])
R=np.array([0.5,np.sqrt(3)/2])
S=np.array([0.7967,-0.6043])
C=np.array([0,0])
l=math.dist(P,Q)
l1=math.dist(R,S)
print(l)
print(l1)

def line_intersect(n1,A1,n2,A2):
  N=np.vstack((n1,n2))
  print(type(N))
  p = np.zeros(2)
  p[0] = n1@A1
  p[1] = n2@A2
  #Intersection
  P=np.linalg.inv(N)@p
  return P
def circ_gen(O,r):
	len = 50
	theta = np.linspace(0,2*np.pi,len)
	x_circ = np.zeros((2,len))
	x_circ[0,:] = r*np.cos(theta)
	x_circ[1,:] = r*np.sin(theta)
	x_circ = (x_circ.T + O).T
	return x_circ

n1=np.array([1.4217,-0.47822])
n2=np.array([1.4703,0.2967])
T=line_intersect(n1,P,n2,R)
T=np.array(T)
print(math.dist(P,T))
print(math.dist(Q,T))
print(math.dist(R,T))
print(math.dist(S,T))
x_circ= circ_gen(C,r)

x_PQ = line_gen(P,Q)
x_RS= line_gen(R,S)

#
#
#Plotting all lines
plt.plot(x_PQ[0,:],x_PQ[1,:],label='$PQ$')
plt.plot(x_RS[0,:],x_RS[1,:])
plt.plot(x_circ[0,:],x_circ[1,:],label='$Circle$')
#Labeling the coordinates
tri_coords = np.vstack((P,Q,R,S,T,C)).T
plt.scatter(tri_coords[0],tri_coords[1])

vert_labels = ['P','Q','R','S','T','C']
for i, txt in enumerate(vert_labels):
    label = "{}".format(txt) #Form label as A(x,y)
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
plt.show()
