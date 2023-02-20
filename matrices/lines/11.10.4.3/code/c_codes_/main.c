/* Code by : S SRIKANTH REDDY FWC220107
  Date : Feb 20 2023
Released under : Dr. G. V. V. Sharma sir
This is code for Find the equations of the lines, which cut-off intercepts on the axes
whose sum and product are 1 and -6,resspectively.
Code is free any one can use 
https://github.com/srikanth9515/FWC/blob/main/LICENSE.md
  */


#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include"sr.h"
int main()
{
	
	printf("a+b=1\n");//The Given condition
	printf("ab=-6\n");//The Given condition

	// for solving the values of a and b we obtain the quadratic equation.
	double **r;        //roots
	r=createMat(2,1); // created the matrix for saving roots
	r=f(-1,1,6);   //Function for solvung roots
	print(r,2,1);
	double **A,**B,**C,**D;//co ordinates of the lines
	A=createMat(2,1);//co ordinate of the line point A
	B=createMat(2,1);//co ordinate of the line point B
	C=createMat(2,1);//co ordinate of the line point C
	D=createMat(2,1);//co ordinate of the ;ine point D
	A=g(A,r); //Function for finding intercepts A
	B=h(B,r);//Function for finding intercepts B
	C=m(C,r);//Function for finding intercepts C
	D=n(D,r);//Function for finding intercepts D
	pmf("A.dat",A,2,1);//print matrix in file A
	pmf("B.dat",B,2,1);//print matrix in file B
	pmf("C.dat",C,2,1);//print matric in file C
	pmf("D.dat",D,2,1);//print matrix in file D	
	return 0;
}




