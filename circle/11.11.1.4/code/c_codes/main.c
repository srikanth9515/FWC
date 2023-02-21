
/* Code by : S SRIKANTH REDDY FWC220107
  Date : Feb 21 2023
Released under : Dr. G. V. V. Sharma sir
This is code for Find the equation of the circle with centre (1,1) and radius 2.
Code is free any one can use 
https://github.com/srikanth9515/FWC/blob/main/LICENSE.md
  */


#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include"sr.h"
int main()
{
	double **C;  // centre 
	double r=sqrt(2);  // radius
	C=createMat(2,1);  // creating the matrix for centre
	C=loadtxt("C.dat",2,1);  // loading the centre from C.dat file
	double **u;  // u matrix for getting circlr equation
	u=createMat(2,1);  // creating the matrix for u
	double f;   // f for getting circlr
	printf("The value of u is : \n");
	u=i(u,C);  // function for solving u=-c
	print(u,2,1);  // function for printing
	f=pow(linalg_norm(u,2),2)-r*r;  // computing f
	printf(" The value of f is \n");
	printf("%lf",f);
	pmf("u.dat",u,2,1);  // printing the u matrix in file for python
	pmf1("f.dat",f);  //  printing the f in file

	return 0;
}

