import numpy as np

# Define the vector
C = np.array([-18, 12, -4])

# Find the magnitude of the vector
c1 = (1/np.linalg.norm(C))*C

print(c1)
