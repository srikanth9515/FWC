#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include"gvv.h"
int main()
{
	double d,r;  // declaring the distance and norm values
	printf("Enter the distance \n");
	scanf("%lf",&d);  // enter 7
	double **n;
	n=createMat(3,1);  // creating normal vector  (3,5,-6)
	n=loadtxt("n.dat",3,1);
	r=linalg_norm(n,3);  // function for doing norm operation
	printf("%lf",r);
	printf("The vector equation of plane is : \n");
	printf("3x+5y-6z=%lf",d*r);
	return 0;
}

	


