/* Code by : S SRIKANTH REDDY FWC220107
  Date : Feb 17 2023
Released under : Dr. G. V. V. Sharma sir
This is code for finding the third coordinte in a straight line
Code is free any one can use 
https://github.com/srikanth9515/FWC/blob/main/LICENSE.md
  */


#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include"gvv.h"
int main()
{
	
	printf("a+b=1\n");
	printf("ab=-6\n");

	// for solving the values of a and b we obtain the quadratic equation.
	double **r;
	r=createMat(2,1); // created the matrix for saving roots
	r=f(-1,1,6);
	print(r,2,1);
	double **A,**B,**C,**D;
	A=createMat(2,1);
	B=createMat(2,1);
	C=createMat(2,1);
	D=createMat(2,1);
	A=g(A,r);
	B=h(B,r);
	C=m(C,r);
	D=n(D,r);
	pmf("A.dat",A,2,1);
	pmf("B.dat",B,2,1);
	pmf("C.dat",C,2,1);
	pmf("D.dat",D,2,1);	
	return 0;
}




