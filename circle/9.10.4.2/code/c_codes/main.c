
/* Code by : S SRIKANTH REDDY FWC220107
  Date : Feb 21 2023
Released under : Dr. G. V. V. Sharma sir
This is code for If two equal chords of a circle intersect within the circle, 
prove that the segments of one chord are equal to corresponding segments of other chord.
Code is free any one can use 
https://github.com/srikanth9515/FWC/blob/main/LICENSE.md
  */



#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include"sr.h"
int main()
{
	// input parameters
	double theta1; // circle parameters theta1
	double theta2; // circle parameters theta2
	double theta3; // circle parameters theta3
	double theta4; // circle parameters theta4
	double d=1.5; // distance 
	double **P,**Q,**R,**S,**T;  // points on circle
	double **result;  // point of intersection
	double **d1,**d2,**d3,**d4;  // points for directional vectors
	double x1,y1,z1,w1;  // distances betweeen P,Q,R,S,T
	theta1=M_PI/6;  //input
	theta3=M_PI/3;  // input
	theta2=theta1-2*asin(d/2);  //obtained from computations
	theta4=theta3-2*asin(d/2);//obtained from computations
	P=createMat(2,1); //Creating the matrix for P
	Q=createMat(2,1);//Creating the matrix for Q
	R=createMat(2,1);//Creating the matrix for R
	S=createMat(2,1);//Creating the matrix for S
	d1=createMat(2,1);//Creating the matrix for d1
	d2=createMat(2,1);//Creating the matrix for d2
	d3=createMat(2,1);//Creating the matrix for d3
	d4=createMat(2,1);//Creating the matrix for d4
	result=createMat(2,1);//Creating the matrix for P
	T=createMat(2,1);//Temprary
	assign(P,theta1);  //assigning the P to cos(theta),sin(theta)
	assign(Q,theta2);  //assigning the Q to cos(theta),sin(theta)
	assign(R,theta3);  //assigning the R to cos(theta),sin(theta)
	assign(S,theta4);  //assigning the S to cos(theta),sin(theta)
	result=Pointofinter(P,Q,R,S,T);  // finding the point of intersection
	printf("The point of intersection is : \n");
	print(result,2,1); // printing the result
	d1=linalg_sub(P,result,2,1);  //function for finding directional vector P
	d2=linalg_sub(R,result,2,1);  //function for finding directional vector R
	d3=linalg_sub(Q,result,2,1);  //function for finding directional vector Q
	d4=linalg_sub(S,result,2,1);  //function for finding directional vector S
	x1=linalg_norm(d1,2);  // function for finding norm for d1
	y1=linalg_norm(d2,2);  // function for finding norm for d2
	z1=linalg_norm(d3,2); // function for finding norm for d3
	w1=linalg_norm(d4,2); // function for finding norm for d4
	printf("\n");
	printf("x1=%lf\n",x1);
	printf("y1=%lf\n",y1);
	printf("z1 %lf\n",z1);
	printf("w1=%lf\n",w1);
	check(x1,y1,z1,w1);  //check wheather circle satisfied or not
	pmf("P.dat",P,2,1);  // printing the P in file for python
	pmf("Q.dat",Q,2,1);  // printing the Q in file for python
	pmf("R.dat",R,2,1);  // printing the R in file for python
	pmf("S.dat",S,2,1);  // printing the s in file for python
	pmf("T.dat",result,2,1);//// printing the T in file for python
	

	return 0;

}





	







