
/* Code by : S SRIKANTH REDDY FWC220107
  Date : Feb 16 2023
Released under : Dr. G. V. V. Sharma sir
This is code for doing doing the cross product and doing the norm for the samee
Code is free any one can use 
https://github.com/srikanth9515/FWC/blob/main/LICENSE.md
  */

#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<math.h>
#include"sr.h"
//main function
int main()
{
	double *a,*b,*c,*d;        //Declaring an arrary by using malloc
	int n=3;
	int i;
	a=createMat(n);      	    //creating vectors a,b,c
	b=createMat(n);
	c=createMat(n);
	
        printf("Enter the 1 st vector : ");
        readMat(a,3);		   //Reading the vector a(1,-7,7)
        printf("Enter the 2nd vector : ");
        readMat(b,3);         	   //Reading the vector b(3,-2,2)

	d=cross(a,b,c);           //Function for finding cross product
	printf("Cross product is : \n");
	print(d,3);

	double norm;
	norm=linalg_norm(d,n);     //Function for doing norm

	printf("The norm is : ");  //printing the norm value
	printf("%lf",norm);

	pmf("a.dat",a,2);         //creating the files for a, b,c
	pmf("b.dat",b,2);
	pmf("c.dat",d,2);

	
}






