
/* Code by : S SRIKANTH REDDY FWC220107
  Date : Feb 12 2023
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
	double *a,*b,*c,*d;    //Declaring an arrary by using malloc
	int n=3;
	int i;
	a=createMat(n);
	b=createMat(n);
	c=createMat(n);

        printf("Enter the 1 st vector : ");
        readMat(a,3);
        printf("Enter the 2nd vector : ");
        readMat(b,3);


	d=cross(a,b,c);             //Function for doing cross product
	printf("Cross product is : \n");
	print(d,3);

	double norm;
	norm=linalg_norm(d,n);  //Function for doing norm

	printf("The norm is : ");
	printf("%lf",norm);

	pmf("a.dat",a,2);
	pmf("b.dat",b,2);
	pmf("c.dat",d,2);

	



}






