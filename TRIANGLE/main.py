import numpy as np
import numpy.linalg as LA
import matplotlib.pyplot as plt
import matplotlib.image as mpimg
from lib import *
A = np.array([1,-1]).reshape(-1,1)
B = np.array([-4,6]).reshape(-1,1) 
C = np.array([-3,-5]).reshape(-1,1) 

m1 = dir_vec(A,B)
m2 = dir_vec(B,C)
m3 = dir_vec(C,A)
H = line_intersect(m3,B,m1,C)
print(H)