
/* Code by : S SRIKANTH REDDY FWC220107
  Date : Feb 17 2023
Released under : Dr. G. V. V. Sharma sir
This is code for Equatation od Line
Code is free any one can use 
https://github.com/srikanth9515/FWC/blob/main/LICENSE.md
  */

#include<stdio.h>       
#include<stdlib.h>
#include<math.h>
#include"lib.h"				 //main Functions
int main()                 
{
	double **a,**omat,**m,**n;        //initializing the variables
	int slope=-2;                    // initializing the slope
	int M=2,N=1;                    // initializing rows and colums
	a=loadtxt("a.dat",2,1);		//loading the point A from the text file
	   				//Store 75deg in radians form
	m=dirvec(slope);                // Directional vector m
	print(m,M,N);                   //printing Directional vector
	save(m,M,N); 			//saving the result to the figure
	omat=loadtxt("omat.dat",2,2);   //loading the point omat from the text file
	n=matmul(omat,m,2,2,2);		//Matrix multiplication of two matrices
	print(n,M,N);			//printing the normal vector
	
}

