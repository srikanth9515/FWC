
/* Code by : S SRIKANTH REDDY FWC220107
  Date : Feb 12 2023
Released under : Dr. G. V. V. Sharma sir
This is code for finding the third coordinte in a straight line
Code is free any one can use 
https://github.com/srikanth9515/FWC/blob/main/LICENSE.md
  */



#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include"gvv.h"

//main function

int main()
{
int a[10]={8,1};//Initializing an arrary by using malloc
int b[10]={3,-4};
char c[10]="k,-4";
int i;
print1(a,2);
printf("\n");
print1(b,2);
printf("\n");
printf("c=%s",c);
printf("\n");

//Declaring arrary
int d[10];

for(i=0;i<2;i++)
{
	d[i]=b[i]-a[i];//Finding a directional vector
}

printf("\n");

print1(d,2);
printf("Solve for k :");//printing values
int e,f,g;
e=-1;
f=8;
g=6;
int x=solve(e,f,g);//function for solving x
printf("%d",x);
printf("\n");

int c1[10]={2,-5};

pmf("a.dat",a,2);//printing matrix in file
pmf("b.dat",b,2);
pmf("c.dat",c1,2);


return 0;
}
