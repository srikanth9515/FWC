#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<math.h>
#include"gvv.h"
//main function
int main()
{
	double *a,*b,*c,*d;//Declaring an arrary by using malloc
	int n=3;
	int i;
	a=createMat(n);
	b=createMat(n);
	c=createMat(n);
printf("Enter the 1 st vector : ");
	for(i=0;i<n;i++)
	{
		scanf("%lf",&a[i]);
	}
printf("Enter the 2nd vector : ");
	for(i=0;i<n;i++)
	{
		scanf("%lf",&b[i]);
	}

	d=cross(a,b,c);//Function for doing cross product
	printf("Cross product is : \n");
	for(i=0;i<n;i++)
	{
		printf("%lf\n",d[i]);
	}

	double norm;
	norm=linalg_norm(d,n);  //Function for doing norm

	printf("The norm is : ");
	printf("%lf",norm);

	pmf("a.dat",a,2);
	pmf("b.dat",b,2);
	pmf("c.dat",d,2);

	



}






