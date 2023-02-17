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

double **f(int a,int b,int c)  // function for solving quadratic equations
{
	double **r;
	r=createMat(2,1);
	r[0][0]=(-1*b+sqrt(b*b - 4*a*c))/2*a;
	r[1][0]=(-1*b-sqrt(b*b - 4*a*c))/2*a;
	return r;
}

int main()
{
	
	printf("a+b=1");
	printf("ab=-6\n");

	// for solving the values of a and b we obtain the quadratic equation.
	double **r;
	r=createMat(2,1); // created the matrix for saving roots
	r=f(-1,1,6);
	int i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<1;j++)
		{
			printf("%lf\n",r[i][j]);
		}
	}

	double **A,**B,**C,**D;
	A=createMat(2,1);
	B=createMat(2,1);
	C=createMat(2,1);
	D=createMat(2,1);

	A[0][0]=r[0][0];  // assigning the points to the matrix
	A[1][0]=0;

	B[0][0]=0;
	B[1][0]=r[1][0];

	C[0][0]=r[1][0];
	C[1][0]=0;

	D[0][0]=0;
	D[1][0]=r[0][0];

	pmf("A.dat",A,2,1);
	pmf("B.dat",B,2,1);
	pmf("C.dat",C,2,1);
	pmf("D.dat",D,2,1);



	





	
	return 0;
}




