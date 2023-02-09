#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<math.h>
double *createMat(int n)//Function for creating an arrary
{
 int i;
 double *a;
 
 //Allocate memory to the pointer
a = (double *)malloc(n * sizeof(double));

 return a;
}

double *cross(double *a,double *b,double *c)
{

	c[0]=(a[1]*b[2]) - (b[1]*a[2]);
	c[1]=(b[0]*a[2]) - (a[0]*b[2]);
	c[2]=(a[0]*b[1]) - (b[0]*a[1]);

	return c;
}

void pmf(char *str, double *a,int len)//function for printing matrix line
{
int i;
FILE *fp;

fp = fopen(str,"w");
for (i = 0; i < len; i++)
{
fprintf(fp,"%lf\n",a[i]);
}
}


double linalg_norm(double *a, int m)//function for doing morm of arrary
{
int i;
double norm=0.0;

 for(i=0;i<m;i++)
 {
norm = norm + a[i]*a[i];
}
return sqrt(norm);

}

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

	d=cross(a,b,c);
	printf("Cross product is : \n");
	for(i=0;i<n;i++)
	{
		printf("%lf\n",d[i]);
	}

	double norm;
	norm=linalg_norm(d,n);

	printf("The norm is : ");
	printf("%lf",norm);

	pmf("a.dat",a,2);
	pmf("b.dat",b,2);
	pmf("c.dat",d,2);

	



}






