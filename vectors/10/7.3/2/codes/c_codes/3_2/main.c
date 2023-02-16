
/* Code by : S SRIKANTH REDDY FWC220107
  Date : Feb 12 2023
Released under : Dr. G. V. V. Sharma sir
This is code for finding the third coordinte in a straight line
Code is free any one can use 
https://github.com/srikanth9515/FWC/blob/main/LICENSE.md
  */


#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include"sr.h"

//main function

int main()
{

	double **A,**B,**C;         // Points on a Line
	double **P,**Q;
	double a,b,c,d,e;           //points on line based on problem excluding k
	int x;	
	A=createMat1(2,1);          //Creating the coordinates (8,1)of the parallelogram
	B=createMat1(2,1);          //Creating the coordinates(k=3,-4) of the parallelogram
	C=createMat1(2,1);          //Creating the coordinates(2,-5) of the parallelogram
	printf("Enter the coordinates in the order acccording to problem\n");
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e);
	x=s(a,b,c,d,e);             // function for finding the values of x and y
	A[0][0]=a;                // creating point A
	A[1][0]=b;

	B[0][0]=x;                  // creating point B
	B[1][0]=c;

	C[0][0]=d;                // creating point C
	C[1][0]=e;

	printMat(A,2,1);           // function for printing the matrix A.B,C
	printMat(B,2,1);
	printMat(C,2,1);
	pmf("a.dat",A,2,1);        // printing the matrix in file
	pmf("b.dat",B,2,1);
	pmf("c.dat",C,2,1);

	P=linalg_sub(B,A,2,1);     // function for subtraction of matrices
	Q=linalg_sub(C,B,2,1);     // function for subtraction of matrices

        printf("Directional vector of two sides: \n");

        printMat(P,2,1);           // printing the matrix
        printMat(Q,2,1);           // printing the matrix

        check(P,Q);              ////output generated

	  return 0;



}
