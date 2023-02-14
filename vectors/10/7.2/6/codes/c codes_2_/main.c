/* Code by : S SRIKANTH REDDY FWC220107
  Date : Feb 12 2023
Released under : Dr. G. V. V. Sharma sir
This is code for Prooving the properties of parallelogram
Code is free any one can use 
https://github.com/srikanth9515/FWC/blob/main/LICENSE.md
  */



#include<stdio.h>            // including stdio.h it is used for standard input and output functions.
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include"sri.h"              // This is the header file which includes all the math functions


int main()
{
 double **A,**B,**C,**D;  // points of parallelogram
 double a,b,c,d,e,f;   // points of parallelogram excluding x and y
 double *x; 
 double **P,**Q;
 x=createMat(2);       // Creating array for finding x and y
 A=createMat1(2,1);    //Creating the coordinates of the parallelogram
 B=createMat1(2,1);
 C=createMat1(2,1);
 D=createMat1(2,1);
 P=createMat1(2,1);  // MATRIX for performing subtraction of two matrices A-B
 Q=createMat1(2,1);   //  MATRIX for performing subtraction of two matrices D-C

 printf("Enter the coordinates of the parallelogram in the order acccording to problem\n");
 scanf("%lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e,&f);
 x=s(a,b,c,d,e,f);     // function for finding the values of x and y
 A[0][0]=a;
 A[1][0]=b;

 B[0][0]=c;
 B[1][0]=x[1];

 C[0][0]=x[0];
 C[1][0]=d;

 D[0][0]=e;
 D[1][0]=f;
 printMat(A,2,1);       // function for printing the matrix
 printMat(B,2,1);
 printMat(C,2,1);
 printMat(D,2,1);
 pmf("a.dat",A,2,1);   // printing the matrix in file
 pmf("b.dat",B,2,1);
 pmf("c.dat",C,2,1);
 pmf("d.dat",D,2,1);

 P=linalg_sub(A,B,2,1);  // function for subtraction of matrices
 Q=linalg_sub(D,C,2,1);  // function for subtraction of matrices

 printf("Directional vector of two sides: \n");

 printMat(P,2,1);       // printing the matrix
 printMat(Q,2,1);       // printing the matrix
 check(P,Q);            // function for checking purpose

 return 0;
}



	


	





	



