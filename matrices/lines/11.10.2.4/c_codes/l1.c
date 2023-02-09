
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int *createMat(int m) // function for creating an array
{
 int i;
 int *a;
 
 //Allocate memory to the pointer
a = (int *)malloc(m * sizeof(int));
 return a;
}

int **createMat1(int m,int n)   // creating 2d matrix
{
 int i;
 int **a;
 
 //Allocate memory to the pointer
a = (int **)malloc(m * sizeof( *a));
    for (i=0; i<m; i++)
         a[i] = (int *)malloc(n * sizeof( *a[i]));

 return a;
}

void pmf(char *str, int **a,int r,int c)  //function for printing matrix in file
{
int i,j;
FILE *fp;

fp = fopen(str,"w");
for (i = 0; i < r; i++)
{
	for(j=0;j<c;j++)
	{

fprintf(fp,"%d\n",a[i][j]);
	}
}
}

int **matmul(int **a, int **b, int m, int n, int p)   //function for performing matrix multiplication
{
int i, j, k;
int **c, temp =0;
c = createMat1(m,p);

 for(i=0;i<m;i++)
 {
  for(k=0;k<p;k++)
  {
    for(j=0;j<n;j++)
    {
	temp= temp+a[i][j]*b[j][k];
    }
	c[i][k]=temp;
	temp = 0;
  }
 }
return c;

}

int main()
{
	int **m;
	int s=2; //size of array
	int i,j,n1=1;
	m=createMat1(2,1);  // created a 2*1 array
	m[0][0]=1;
	m[1][0]=-2;
	printf("The vector m is :\n");
	for(i=0;i<s;i++)
	{
		for(j=0;j<n1;j++)
		{
		printf("%d\n",m[i][j]);
		}
	}
	int **omat;
	omat=createMat1(2,2);  //creating 2*2 matrix
	omat[0][0]=0;
	omat[0][1]=1;
	omat[1][0]=-1;
	omat[1][1]=0;
	int **A;
	A=createMat1(2,1);
	A[0][0]=-3;
	A[1][0]=0;


printf("Omat is :\n");
for(i=0;i<s;i++)
{
	for(j=0;j<s;j++)
	{
		printf("%d ",omat[i][j]);
	}
	printf("\n");
	
}
int **n;
n=createMat1(2,1);
n=matmul(omat,m,2,2,1);   //finding normal vector
printf("The vector n is :\n");
for(i=0;i<s;i++)
{
	for(j=0;j<1;j++)
	{
		printf("%d ",n[i][j]);
	}
	printf("\n");
}

	pmf("m.dat",m,2,1);
	pmf("n.dat",n,2,1);
	pmf("omat.dat",omat,2,2);
	pmf("A.dat",A,2,1);










	return 0;
}




