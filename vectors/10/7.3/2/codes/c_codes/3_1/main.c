
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
int a[10]={7,-2};//initializing an array by using malloc
int b[10]={5,1};
char c[10]="3,k";
int i;


print1(a,2);
printf("\n");
print1(b,2);
printf("\n");
printf("c=%s",c);
printf("\n");


int d[10];

for(i=0;i<2;i++)
{
	d[i]=b[i]-a[i];//For finding directional vector
}

printf("\n");

print1(d,2);
printf("Solve for k :");
int e,f,g;
e=1;
f=-1;
g=3;
int x=solve(e,f,g);//Function for solving k
printf("%d",x);
printf("\n");
int c1[10]={3,4};

pmf("a.dat",a,2);//printing matrix in file
pmf("b.dat",b,2);
pmf("c.dat",c1,2);


return 0;
}
