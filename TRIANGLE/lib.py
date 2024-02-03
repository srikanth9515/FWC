import numpy as np
def dir_vec(A,B):
  return B-A

def line_intersect(n1,A1,n2,A2):
  N=np.block([n1,n2]).T
  p = np.zeros((2,1))
  p[0] = n1.T@A1
  p[1] = n2.T@A2
  print(N)
  print(p)
  #Intersection
  P=np.linalg.solve(N,p)
  return P
