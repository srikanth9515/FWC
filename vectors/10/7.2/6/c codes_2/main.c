#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include"gvv.h"
int solve(int a,int b,int c)  //Function for solving algebraic expression of having one variqble.
{

	return (c-b)/a;
}







int main()
{
char a[10]="1,2";
char b[10]="4,y";
char c[10]="3,5";
char d[10]="x,6";
printf("a=%s",a);
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
pmf ("a.dat",a1,2);
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

