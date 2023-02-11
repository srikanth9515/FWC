#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include"gvv.h"

int main()
{
	double **n;  
	int r=2;
	int c=1;
	n=createMat(r,c);  // creating the matrix the normal vector of line
	n[0][0]=15;
	n[1][0]=8;
	double const1=-34;
	double const2=31;
	float d;  // distance between lines
	d= (abs(const1-const2))/linalg_norm(n,r);  // finding the distance between lines
	printf("%f",d);
	pmf("n.dat",n,r,c);  // saving the normal vector in file.
	pmf1("const1.dat",const1);  // saving the constant values in files for acessing in to python.
	pmf1("const2.dat",const2);
	pmf1("d.dat",d);

	


	return 0;
}


