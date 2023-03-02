/* Code by : S SRIKANTH REDDY FWC220107
  Date : March 2 2023
Released under : Dr. G. V. V. Sharma sir
This is code for checking whether A(5,-2) B(6,4) c(7,-2) the trinagle is isoceles or not 
Code is free any one can use 
https://github.com/srikanth9515/FWC/blob/main/LICENSE.md
  */


#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#include"sri.h"

int main() {
    // create matrix A
    Node *a = NULL;  // declaring the node for point A
    Node *b = NULL;  
    Node *c = NULL;  
    Node *d = NULL;  
    Node *e= NULL;   
    Node *f = NULL; 
    Node *g = NULL;
    double d1,d2,d3;
    printf("Enter the first point \n");
    a=createMatrix(2,1);  // function for creating matrix using linked list
    printf("Enter the second point \n");
    b=createMatrix(2,1);
    printf("Enter the third point \n");
    c=createMatrix(2,1);
    print(a);  // function for printing the linked list
    print(b);
    print(c);
    e=sub(a,b);   // function for subtraction of two linked lists
    f=sub(b,c);   
    g=sub(c,a);
    print(e);
    print(f);
    print(g);
    d1=Norm(e,2,1);  // function for finding norm of a linked list
    d2=Norm(f,2,1);
    d3=Norm(g,2,1);
    printf("%lf\n",d1);
    printf("%lf\n",d2);
    printf("%lf\n",d3);
    check(d1,d2,d3);   // checking whether the condition is true or not
    save(a,"a.dat",2,1);
    save(b,"b.dat",2,1);
    save(c,"c.dat",2,1);
    return 0;
}
