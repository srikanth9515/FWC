#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int solve(int a,int b,int c)
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

printf("Solve for x :");
int e,f,g;
e=1;
f=-3;
g=3;
int x=solve(e,f,g);
printf("%d",x);
printf("\n");
printf("solve for y : ");
int l=1,m=-2,n=1;
int y=solve(l,m,n);
printf("%d",y);


return 0;
}

