

/* Code by : S SRIKANTH REDDY FWC220107
  Date : Feb 20 2023
Released under : Dr. G. V. V. Sharma sir
This is code for Show that the line through the points (1, -1, 2), (3, 4, -2) 
is perpendicular to the line through the points (0, 3, 2) and (3, 5, 6).nd -6,resspectively.
Code is free any one can use 
https://github.com/srikanth9515/FWC/blob/main/LICENSE.md
  */

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include"sr.h"
int main()
{

double **a,**b,**c,**d;//craeting a matrix for a,b,c
double **e,**f;//creatix a matrix for e,f
double **g; // matrix for transpose 
double **h;//matrix for storing result
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
e=linalg_sub(b,a,3,1);   //function for subtraction of B-A
f=linalg_sub(d,c,3,1);   //Function for subtraction of D-C
g=createMat(1,3);        //created a matrix g for transpose 
g=transpose (e,3,1);//function for transpose of e
h=createMat(1,1);  //created a matrix multipilation
h=matmul(g,f,1,3,3);//function for matrix multipilication
print(h,1,1);
check(h);        //checking wheather is perpendicular
return 0;
}
