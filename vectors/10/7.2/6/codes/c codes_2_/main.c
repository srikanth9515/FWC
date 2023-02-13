
/* Code by : S SRIKANTH REDDY FWC220107
  Date : Feb 12 2023
Released under : Dr. G. V. V. Sharma sir
This is code for Prooving the properties of parallelogram
Code is free any one can use 
https://github.com/srikanth9515/FWC/blob/main/LICENSE.md
  */
#include<stdio.h>            // including stdio.h it is used for standard input and output functions.
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include"sri.h"             // This is the header file which includes all the math functions


//main function
int main()
{
	int *x;
	x=(int *)malloc(sizeof(int));
char A[10]="1,2";         // creating the points on parallelogram
char B[10]="4,y";
char C[10]="3,5";
char D[10]="x,6";
printf("a=%s",A);         //printing points
printf("\n");
printf("b=%s",B);
printf("\n");
printf("c=%s",C);
printf("\n");
printf("d=%s",D);
printf("\n");
printf("solve for x and y");
int a,b,c,d,e,f;
printf("Enter the coordinates of parallelogram in the order of A,B,C,D by leaving the variables\n");
scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);//Readung the values of points of parallogram 
x=s(a,b,c,d,e,f);//Function for solving x and y

int a1[10]={a,b};
int b1[10]={c,x[1]};
int c1[10]={x[0],d};
int d1[10]={e,f};

pmf ("a.dat",a1,2);//printing the matrix in file
pmf ("b.dat",b1,2);
pmf ("c.dat",c1,2);
pmf ("d.dat",d1,2);




return 0;
}

