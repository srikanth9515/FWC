#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include"gvv.h"
int main()
{

double **a,**b,**c,**d;//craeting a matrix for a,b,c
double **e,**f;//creatix a matrix for e,f
double **g;
double **h;
a=createMat(3,1);//matrix a
b=createMat(3,1);//matrix b
c=createMat(3,1);//matrix c
d=createMat(3,1);//matrix d
e=createMat(3,1);//matrix a-b
f=createMat(3,1);//matrix c-d
//initializing the values
a=loadtxt("a.dat",3,1);  // function for loading matrix A from a.dat
b=loadtxt("b.dat",3,1);  // function for loading matrix B from b.dat
c=loadtxt("c.dat",3,1);  // function for loading matrix C from c.dat
d=loadtxt("d.dat",3,1);  // function for loading matrix D from d.dat
e=linalg_sub(b,a,3,1);   //function for subtraction of two matrices
f=linalg_sub(d,c,3,1);
g=createMat(1,3);
g=transpose (e,3,1);//function for transpose of e
h=createMat(1,1);
h=matmul(g,f,1,3,3);//function for matrix multipilication
print(h,1,1);
check(h);
return 0;
}
