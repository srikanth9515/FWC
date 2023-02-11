#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include"gvv.h"

//main Function
int main()
{

double **a,**b,**c,**d;//craeting a matrix for a,b,c
a=createMat(3,1);//matrix a
b=createMat(3,1);//matrix b
c=createMat(3,1);//matrix c
d=createMat(3,1);//matrix d

double **e,**f;//creatix a matrix for e,f
e=createMat(3,1);//matrix a-b
f=createMat(3,1);//matrix c-d
//initializing the values
a[0][0]=1;
a[1][0]=-1;
a[2][0]=2;

b[0][0]=3;
b[1][0]=4;
b[2][0]=-2;

c[0][0]=0;
c[1][0]=3;
c[2][0]=2;

d[0][0]=3;
d[1][0]=5;
d[2][0]=6;
int i,j;
for (i=0;i<3;i++)
{
for(j=0;j<1;j++)
{
e[i][j]=b[i][j]-a[i][j];

}
}

for (i=0;i<3;i++)
{
for(j=0;j<1;j++)
{
f[i][j]=d[i][j]-c[i][j];
}
}

double **g;
g=createMat(1,3);
g=transpose (e,3,1);//function for transpose of e

double **h;
h=createMat(1,1);
h=matmul(g,f,1,3,3);//function for matrix multipilication
printf("Hence the two lines are perpendicular");
printf("\n");
for(i=0;i<1;i++)
{
	for(j=0;j<1;j++)
	{
		printf("%lf ",h[i][j]);
	}
}




return 0;
}
