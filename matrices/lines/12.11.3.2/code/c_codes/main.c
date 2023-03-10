/* Code by : S SRIKANTH REDDY FWC220107
  Date : Feb 20 2023
Released under : Dr. G. V. V. Sharma sir
This is code for vector equation of plane
Code is free any one can use 
https://github.com/srikanth9515/FWC/blob/main/LICENSE.md
  */

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include"sr.h"
int main()
{
	double d,r;  // declaring the distance and norm values
	printf("Enter the distance \n");
	scanf("%lf",&d);  // enter 7
	double **n; //Normal vector
	n=createMat(3,1);  // creating normal vector  (3,5,-6)
	n=loadtxt("n.dat",3,1);//load the matrix n
	r=linalg_norm(n,3);  // function for doing norm operation
	printf("%lf",r);
	printf("The vector equation of plane is : \n");
	printf("3x+5y-6z=%lf",d*r);//the vector quation of a plane
	return 0;
}

	


