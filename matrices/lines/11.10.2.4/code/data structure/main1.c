
/* Code by : S SRIKANTH REDDY FWC220107
  Date : Feb 17 2023
Released under : Dr. G. V. V. Sharma sir
This is code for Equatation od Line m (-1 ,0) n (-3 ,0)  omat (0 1 -1 0)
Code is free any one can use 
https://github.com/srikanth9515/FWC/blob/main/LICENSE.md
  */


#include <stdio.h>
#include <stdlib.h>
#include"sri.h"
int main()

{
    struct node* m=NULL;  // created a matrix using linked lists m
    struct node* A=NULL;  
    struct node* omat=NULL;
    struct node* n=NULL;
    int **m1,**A1,**omat1,**n1;  // created an matrices for temporary usages
    m1=createMat1(2,1);   // function for creating the matrix m1
    A1=createMat1(2,1);
    omat1=createMat1(2,2);
    printf("Enter the m vector");
    readMat(m1,2,1);  // function for reading matrix
    printf("Enter the point on line ");
    readMat(A1,2,1);
    printf("Enter the omat");
    readMat(omat1,2,2);
    m=create_sparse(m1,2,1);  //creating the matrix using linked list with the help of above created matrices
    A=create_sparse(A1,2,1);
    omat=create_sparse(omat1,2,2);
    n1=mul(omat,m,2,2,2,1);  // function for performing matrix multiplication
    n=create_sparse(n1,2,1);
    save(m,"m1.dat",2,1);  // saving the linked list in dat file
    save(A,"A1.dat",2,1);
    save(n,"n1.dat",2,1);
    pmf("A.dat",A1,2,1);  // function for saving in to dat file

}




           

