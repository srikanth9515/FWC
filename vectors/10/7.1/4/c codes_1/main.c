/* S SRIKANTH REDDY FWC220107
  Date : Feb 12 2023
Guide : Dr. G. V. V. Sharma sir
This is code for checking whether the trinagle is isoceles or not
Code is free any one can use 
https://github.com/srikanth9515/FWC/blob/main/LICENSE.md
  */


#include<stdio.h>            // including stdio.h it is used for standard input and output functions.
#include<stdlib.h>
#include<math.h>
#include"gvv.h"             // This is the header file which includes all the math functions
int main()                  // main function
{

	int m=2;
	double *a,*b,*c;               //declarations for creating the 3 points in a triangle. 
	double *e,*f,*g; 
	a=createMat(m);                //creating the point on the triangle of size m
	int j;
	a[0]=5;                        //initialising an array
	a[1]=-2;
        print1(a,m);                   //function for printing the first coordinate
	pmf("a.dat",a,2);              //printing the first point  in files in dat format
	b=createMat(m);                // creating the second point
	b[0]=6;
	b[1]=4;
	print1(b,m);
	c=createMat(m);                // creating the third point
	c[0]=7;
	c[1]=-2;
	print1(c,m);
                                 	//finding the directional vectors of the three points.
	



	e=createMat(m);               //directional vectors of the 1st point
	e=d(a,b,2);                   // function for finding directional vector
	print1(e,m);
	f=createMat(m);               // directional vectors of the 2nd point      
	f=d(b,c,2);
	print1(f,m);
	g=createMat(m);                        // directional vectors of the 3rd point
	g=d(c,a,2);
	print1(g,m);
	
	                                     // finding the distance between the two points in triangle

	double d1,d2,d3,d4;
	printf("\n");
	d1=linalg_norm(e,m);           //function for finding norm of a vector
	printf("%lf",d1);
	printf("\n");
	d2=linalg_norm(f,m);
	printf("%lf",d2);
	printf("\n");
	d3=linalg_norm(g,m);
	printf("%lf",d3);
	printf("\n");
	pmf("b.dat",b,2);                 //saving the points in file for computing in python
	pmf("c.dat",c,2);

if(d1==d2 || d2==d3 || d3==d1 )
{

	printf("Hence the given coordinates are the points of Isoceles triangle :");

}

else
{
printf(" The given triangle is not isoceles triangle");
}


return 0;
}
