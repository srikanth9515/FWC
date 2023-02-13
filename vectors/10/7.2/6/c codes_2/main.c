
/* Code by : S SRIKANTH REDDY FWC220107
  Date : Feb 12 2023
Released under : Dr. G. V. V. Sharma sir
This is code for checking whether the trinagle is isoceles or not
Code is free any one can use 
https://github.com/srikanth9515/FWC/blob/main/LICENSE.md
  */
#include<stdio.h>  // including stdio.h it is used for standard input and output functions.
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include"sri.h"  // This is the header file which includes all the math functions


//main function
int main()
{
char a[10]="1,2";
char b[10]="4,y";
char c[10]="3,5";
char d[10]="x,6";
printf("a=%s",a);//printing values
printf("\n");
printf("b=%s",b);
printf("\n");
printf("c=%s",c);
printf("\n");
printf("d=%s",d);
printf("\n");
int a1[10]={1,2};
int b1[10]={4,3}; //initialising an array
int c1[10]={3,5};
int d1[10]={6,6};
pmf ("a.dat",a1,2);//printing the matrix in file
pmf ("b.dat",b1,2);
pmf ("c.dat",c1,2);
pmf ("d.dat",d1,2);


printf("Solve for x :");
int e,f,g;
e=1;
f=-3;
g=3;
int x=solve(e,f,g); //function for solving x
printf("%d",x);
printf("\n");
printf("solve for y : ");
int l=1,m=-2,n=1;
int y=solve(l,m,n); //function for solving y
printf("%d",y);


return 0;
}

