#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#include"sri.h"

int main() 
{
    // create matrix A
    Node *a = NULL;  // declaring the node for point A
    Node *b = NULL;  
    Node *c = NULL;
    Node *d = NULL;
    Node *e= NULL;//a-b
    Node *f = NULL;//c-d
    int *x,*y,*z,*w,*q;  //created a temporary arrays for computing 
    double dis1,dis2;  // lengths of parallelogram
    a=createMatrix(2,1);  // function for creating matrix using linked list
    b=createMatrix(2,1);
    c=createMatrix(2,1);
    d=createMatrix(2,1);
    e=createMatrix(2,1);
    f=createMatrix(2,1);
    x=(int *)malloc(2*sizeof(int));  // creating the matrices for temporary purpose
    y=(int *)malloc(2*sizeof(int));
    z=(int *)malloc(2*sizeof(int));
    w=(int *)malloc(2*sizeof(int));
    q=(int *)malloc(2*sizeof(int));
    int a1,b1,c1,d1,e1,f1;   // points of parallelogram excluding x and y
    printf("Enter the coordinates as per problem without unknown values \n");
    scanf("%d%d%d%d%d%d",&a1,&b1,&c1,&d1,&e1,&f1);  // input variables
    x=s(a1,b1,c1,d1,e1,f1);     // function for finding the values of x and y
    y[0]=a1;  // assigning the inputs
    y[1]=b1;
    z[0]=c1;
    z[1]=x[1];
    w[0]=x[0];
    w[1]=d1;
    q[0]=e1;
    q[1]=f1;
   a=assign(2,1,y);
   b=assign(2,1,z);  // function for assigning the values to the linked list
   c=assign(2,1,w);
   d=assign(2,1,q);
   e=sub(a,b);   // subtraction of linked lists (a-b)
   f=sub(d,c);   // subtraction of linked lists (c-d)
   dis1=Norm(e,2,1);  // function for norm of linked list
   dis2=Norm(d,2,1); 
   check(dis1,dis2);
   save(a,"a.dat",2,1);  // saving the linked list in a.dat file
   save(b,"b.dat",2,1);
   save(c,"c.dat",2,1);
   save(d,"d.dat",2,1);
   return 0;
}
