
/* Code by : S SRIKANTH REDDY FWC220107
  Date : Feb 20 2023
Released under : Dr. G. V. V. Sharma sir
This is code for finding the directional cosine of third vector which is perpendicular to both the given vectors
Code is free any one can use 
https://github.com/srikanth9515/FWC/blob/main/LICENSE.md
  */
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include"sr.h"

int main()
{
	double **A,**B,**C,**P,**PT,**mul;  // declarations of matrices
	A=createMat(3,1); // matrix for first directional vector take 0.707,0.707,0 for testing purpose
	B=createMat(3,1); // matrix for second directional vector take -0.707,0.707,0 for testing purpose
	C=createMat(3,1);   // matrix for third vector which is perpendicular to both the vectors
	P=createMat(3,3);  // matrix for combining all the above three matrices
	PT=createMat(3,3);  // transpose of above matrix
	mul=createMat(3,3);  // matrix for doing matrix multiplication
	printf("Enter the first DC :\n");
	readMat(A,3,1);   //reading the first vector
	printf("Enter the second DC :\n");
	readMat(B,3,1);    // reading the second vector
	C=compute(A,B,C);  // computing the third vetor from the above 2 vectors 
	print(C,3,1);    // printing the matrix of C
	P=compute_p(A,B,C,P);  // compute the matrix of P 
	print(P,3,3);  // printing the matrix of P of 3 rows and 3 columns
	PT=transpose(P,3,3);  // function for doing transpose of matrix
	print(PT,3,3);   // printing the transpose matrix
	mul=matmul(PT,P,3,3,3);  // performing matrix multiplication
	printf("The result of matrix multiplication is : \n");
	print(mul,3,3);
	check(mul);  // checking whether the condition is satisfied or not
	
}


	
