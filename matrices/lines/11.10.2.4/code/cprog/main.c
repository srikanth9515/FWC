#include<stdio.h>       
#include<stdlib.h>
#include<math.h>
#include"lib.h"				//Functions
int main()                 
{
	double **a,**omat,**m,**n;		//initializing the variables
	int slope=-2;
	int M=2,N=1;
	a=loadtxt("a.dat",2,1);		//loading the point A from the text file
	   				//Store 75deg in radians form
	m=dirvec(slope);
	print(m,M,N);
		//Direction vector m
	//save(m,M,N); 			//saving the result to the figure
	omat=loadtxt("omat.dat",2,2);		//loading the point z from the text file
	n=matmul(omat,m,2,2,2);		//Matrix multiplication of two matrices
	print(n,M,N);			//printing the normal vector
	
}

