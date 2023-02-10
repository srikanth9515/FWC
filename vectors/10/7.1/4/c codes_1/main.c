#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include"coef.h"



int main()
{

	int m=2;
	double *a,*b,*c; //Declaring an array by using malloc
	double *e,*f,*g;
	printf("Enter Size : ");
	a=createMat(m);
	int j;
	a[0]=5; //initialising an array
	a[1]=-2;

	for(j=0;j<m;j++)
	{
		printf("%lf\n",a[j]);
	}



	pmf("a.dat",a,2);  //printing the array in files

	b=createMat(m);
	b[0]=6;
	b[1]=4;

	for(j=0;j<m;j++)
	{
		printf("%lf\n",b[j]);
	}
	c=createMat(m);
	c[0]=7;
	c[1]=-2;
	for(j=0;j<m;j++)
	{
		printf("%lf\n",c[j]);
	}
	e=createMat(m);
	for(j=0;j<m;j++)
	{
		e[j]=a[j]-b[j];
	}
	for(j=0;j<m;j++)
	{
		printf("%lf\n",e[j]);
	}
	f=createMat(m);
	for(j=0;j<m;j++)
	{
		f[j]=b[j]-c[j];
	}
	for(j=0;j<m;j++)
	{
		printf("%lf\n",f[j]);
	}
	g=createMat(m);
	for(j=0;j<m;j++)
	{
		g[j]=c[j]-a[j];
	}
	for(j=0;j<m;j++)
	{
		printf("%lf\n",g[j]);
	}

	double d1,d2,d3,d4;
	printf("\n");
	d1=linalg_norm(e,m); //doing the norm 
	printf("%lf",d1);
	printf("\n");
	d2=linalg_norm(f,m);
	printf("%lf",d2);
	printf("\n");
	d3=linalg_norm(g,m);
	printf("%lf",d3);
	printf("\n");
	pmf("b.dat",b,2);
	pmf("c.dat",c,2);

	printf("Hence the given coordinates are the points of Isoceles triangle :");

return 0;
}
