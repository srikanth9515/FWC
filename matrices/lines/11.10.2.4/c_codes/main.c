
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include"sr.h"
int main()
{
	double **m;          //double pointer for 2d matrix
	int s=2;             //size of array
	int i,j,n1=1;
	m=createMat1(2,1);  // created a 2*1 array
	m[0][0]=1;
	m[1][0]=-2;
	printf("The vector m is :\n");//printing m value
	for(i=0;i<s;i++)
	{
		for(j=0;j<n1;j++)
		{
		printf("%lf\n",m[i][j]);
		}
	}
	double **omat;         //finding omat 
	omat=createMat1(2,2);  //creating 2*2 matrix
	omat[0][0]=0;          //omat values
	omat[0][1]=1;
	omat[1][0]=-1;
	omat[1][1]=0;
	double **A;           //finding  vector point  A 
	A=createMat1(2,1);    // creating a 2*1 array
	A[0][0]=-3;         
	A[1][0]=0;


printf("Omat is :\n");        //printing omat values
for(i=0;i<s;i++)
{
	for(j=0;j<s;j++)
	{
		printf("%lf ",omat[i][j]);
	}
	printf("\n");
	
}
double **n;                     //creating vector n
n=createMat1(2,1);
n=matmul(omat,m,2,2,1);         //finding normal vector
printf("The vector n is :\n");
for(i=0;i<s;i++)
{
	for(j=0;j<1;j++)
	{
		printf("%lf ",n[i][j]);
	}
	printf("\n");
}

	pmf("m.dat",m,2,1);     // printing the matrix in file.
	pmf("n.dat",n,2,1);
	pmf("omat.dat",omat,2,2);
	pmf("A.dat",A,2,1);



	return 0;
}




