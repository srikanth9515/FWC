// preprocessor directives 

#include<stdio.h>  // including stdio.h it is used for standard input and output functions.
#include<stdlib.h>
#include<math.h>
#include"gvv.h"  // This is the header file which includes all the math functions



int main() // main function
{

	int m=2;
	double *a,*b,*c;   //declarations for creating the 3 points in a triangle. 
	double *e,*f,*g;
	printf("Enter Size : ");
	a=createMat(m);  //creating the point on the triangle of size m
	int j;
	a[0]=5; //initialising an array
	a[1]=-2;
\\printing the first coordinate
	for(j=0;j<m;j++)
	{
		printf("%lf\n",a[j]);
	}



	pmf("a.dat",a,2);  //printing the first point  in files in dat format

	b=createMat(m);  // creating the second point
	b[0]=6;
	b[1]=4;

	for(j=0;j<m;j++)
	{
		printf("%lf\n",b[j]);
	}
	c=createMat(m);  // creating the third point
	c[0]=7;
	c[1]=-2;
	for(j=0;j<m;j++)
	{
		printf("%lf\n",c[j]);
	}
	
	
	//finding the directional vectors of the three points.
	e=createMat(m);//directional vectors of the 1st point
	for(j=0;j<m;j++)
	{
		e[j]=a[j]-b[j];
	}
	for(j=0;j<m;j++)
	{
		printf("%lf\n",e[j]);
	}
	f=createMat(m);// directional vectors of the 2nd point
	for(j=0;j<m;j++)
	{
		f[j]=b[j]-c[j];
	}
	for(j=0;j<m;j++)
	{
		printf("%lf\n",f[j]);
	}
	g=createMat(m);// directional vectors of the 3rd point
	for(j=0;j<m;j++)
	{
		g[j]=c[j]-a[j];
	}
	for(j=0;j<m;j++)
	{
		printf("%lf\n",g[j]);
	}
	
	// finding the distance between the two points in triangle

	double d1,d2,d3,d4;
	printf("\n");
	d1=linalg_norm(e,m); //function for finding norm of a vector
	printf("%lf",d1);
	printf("\n");
	d2=linalg_norm(f,m);
	printf("%lf",d2);
	printf("\n");
	d3=linalg_norm(g,m);
	printf("%lf",d3);
	printf("\n");
	pmf("b.dat",b,2);  //saving the points in file for computing in python
	pmf("c.dat",c,2);

	printf("Hence the given coordinates are the points of Isoceles triangle :");

return 0;
}
