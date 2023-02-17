
/* Code by : S SRIKANTH REDDY FWC220107
  Date : Feb 17 2023
Released under : Dr. G. V. V. Sharma sir
This is code for Equatation of parallel Line
Code is free any one can use 
https://github.com/srikanth9515/FWC/blob/main/LICENSE.md
  */
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include"sr.h"					//functions

int main()
{
	double **n,**a,**d;				//initialising variables  
	int r=2;
	int c=1;
	a=loadtxt("a.dat",2,1);			//loading point A
	d=loadtxt("d.dat",2,1);			//loading point D
	n=loadtxt("n.dat",2,1);			//loading normal vector
	double const1=-34;				//intialising constant 1
	double const2=31;				//intialising constant 2
	float d1;  					// distance between lines
	d1= (abs(const1-const2))/linalg_norm(n,r);  // finding the distance between lines
	printf("%f",d1);

	


	return 0;
}


