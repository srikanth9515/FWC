#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#include"sri.h"
int main() 
{

	int *A,*B,*C;  // Matrices for points of triangle
	A=createMat(2); //Create the matrix for point 1
	B=createMat(2); //Create the matrix for point 2
	C=createMat(2); //Create the matrix for point 3
	printf("Enter the first vector: ");
	readMat(A,2);   //scanning the matrix 
	printf("Enter the second vector: ");
	readMat(B,2);   //scanning the matrix B
	printf("Enter the third vector: ");

	readMat(C,2);   //scanning the matrix C
    struct Node* head1 = NULL; //creating the stack 1 using linked list
    push(&head1, A[1]);  // pushing the values to the stack using linked list
    push(&head1, A[0]);  // pushing the values to the stack using linked list
    struct Node* head2 = NULL; // Creating the stack 2 using linked list
    push(&head2, B[1]); // pushing the values to the stack using linked list
    push(&head2, B[0]); // pushing the values to the stack using linked list
    struct Node* head3 = NULL; // Creating the stack 3 using linked list
    push(&head3, C[1]); // pushing the values to the stack using linked list
    push(&head3, C[0]); //  pushing the values to the stack using linked list
    int *d1,*d2,*d3;  // arrays for differences of stacks
    int i;
    d1=subtractLists(head1, head2);  // function for performing the differences of two stacks
    d2=subtractLists(head2, head3);
    d3=subtractLists(head3, head1);
    print(d1,2);
    print(d2,2);
    print(d3,2);
    struct Node* diff1 = NULL;  // creating the stack for directional vectors d1
    push(&diff1, d1[1]);
    push(&diff1, d1[0]);
    struct Node* diff2 = NULL;// creating the stack for directional vectors d1
    push(&diff2, d2[1]);
    push(&diff2, d2[0]);
    struct Node* diff3 = NULL;// creating the stack for directional vectors d1
    push(&diff3, d3[1]);
    push(&diff3, d3[0]);
    double n1,n2,n3;
    n1=norm(diff1);  // function for finding norm of a vector
    printf("\n");
    printf("%lf",n1);
    n2=norm(diff2); // function for finding norm of a vector
    printf("\n");
    printf("%lf",n2);
    n3=norm(diff3); // function for finding norm of a vector
    printf("\n");
    printf("%lf\n",n3);
    check(n1,n2,n3);  // function for checking whether the condition is true or not
    return 0;
}

