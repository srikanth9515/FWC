#include<stdio.h>
#include<stdlib.h>
#include<math.h>




double *createMat(int m)
{
 int i;
 double *a;
 
 //Allocate memory to the pointer
a = (double *)malloc(m * sizeof(double));
 return a;
}




double linalg_norm(double *a, int m)
{
int i;
double norm=0.0;

 for(i=0;i<m;i++)
 {
norm = norm + a[i]*a[i];
}
return sqrt(norm);

}




void pmf(char *str, double *a,int len)
{
int i;
FILE *fp;

fp = fopen(str,"w");
for (i = 0; i < len; i++)
{
fprintf(fp,"%lf\n",a[i]);
}
}




int main()
{

	int m=2;
	double *a,*b,*c;
	double *e,*f,*g;
	printf("Enter Size : ");
	a=createMat(m);
	int j;
	a[0]=5;
	a[1]=-2;

	for(j=0;j<m;j++)
	{
		printf("%lf\n",a[j]);
	}



	pmf("a.dat",a,2);

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
	d1=linalg_norm(e,m);
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
	
