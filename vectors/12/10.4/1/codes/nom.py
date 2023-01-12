import numpy as np

# Creating two vectors
# We have inserted elements of int type
arr1 = [1, -7, 7]
arr2 = [3, -2, 2]

# Display the vectors
print("Vector 1...\n", arr1)
print("\nVector 2...\n", arr2)

# To compute the cross product of two vectors, use the numpy.cross() method in Python Numpy
# The method returns c, the Vector cross product(s).
print("\nResult...\n",np.cross(arr1, arr2))
