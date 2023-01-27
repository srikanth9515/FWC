import numpy as np
import matplotlib.pyplot as plt
import sympy as sym
l1=sym.Symbol('l1')
m1=sym.Symbol('m1')
n1=sym.Symbol('n1')
l2=sym.Symbol('l2')
m2=sym.Symbol('m2')
n2=sym.Symbol('n2')
A=np.array(([l1,m1,n1],[l2,m2,n2],[m1*n2 - m2*n1,-l1*n2 + l2*n1,l1*m2 - l2*m1]))
B=np.transpose(A)
C=A@B
l1**2+m1**2+n1**2==0
print(C)
