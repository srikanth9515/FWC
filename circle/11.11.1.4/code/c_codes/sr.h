//Function declaration
double **createMat(int m,int n);
void readMat(double **p, int m,int n);
void print(double **p,int m,int n);
double **loadtxt(char *str,int m,int n);
double linalg_norm(double **a, int m);
double **linalg_sub(double **a, double **b, int m, int n);
double **linalg_inv(double **mat, int m);
double **matmul(double **a, double **b, int m, int n, int p);
double **transpose(double **a,  int m, int n);
void uniform(char *str, int len);
void gaussian(char *str, int len);
double mean(char *str);
void pmf(char *str, double **a,int r,int c); 
void pmf1(char *str,double r); 
double **Pointofinter(double **P,double **Q,double **R,double **S,double **result);

void assign(double **P,double x);
void check(double a,double b,double c,double d);

double **i(double **a,double **b);
void assign(double **P,double x)
{
	P[0][0]=cos(x);
	P[1][0]=sin(x);
}
double **Pointofinter(double **P,double **Q,double **R,double **S,double **result)

{
    double m1, c1, m2, c2;
    double dx, dy;
    double intersection_X, intersection_Y;
    dx = Q[0][0] - P[0][0];
    dy = Q[1][0] - P[1][0];
    m1 = dy / dx;
    c1 = P[1][0] - m1 * P[0][0];


    dx = S[0][0] - R[0][0];
    dy = S[1][0] - R[1][0];
    m2 = dy / dx;
    c2 = R[1][0] - m2 * R[0][0]; 



        intersection_X = (c2 - c1) / (m1 - m2);
        intersection_Y = m1 * intersection_X + c1;
	result[0][0]=intersection_X;
	result[1][0]=intersection_Y;

	return result;
}
double **i(double **a,double **b)
{
	a[0][0]=-b[0][0];
	a[1][0]=-b[1][0];

	return a;
}
void check(double a,double b,double c,double d)
{
	if(a==d && b==c )
	{
		printf("circle properties were  not  satisfied ");
	}
	else
	{
		printf("Circle properties were satisfied");

	}
}
void pmf1(char *str,double r)  
{
FILE *fp;
fp = fopen(str,"w");
fprintf(fp,"%lf\n",r);
}
void pmf(char *str, double **a,int r,int c)  
{
int i,j;
FILE *fp;

fp = fopen(str,"w");
for (i = 0; i < r; i++)
{
	for(j=0;j<c;j++)
	{

fprintf(fp,"%lf\n",a[i][j]);
	}
}
}
//Defining the function for matrix creation
double **createMat(int m,int n)
{
 int i;
 double **a;
 
 //Allocate memory to the pointer
a = (double **)malloc(m * sizeof( *a));
    for (i=0; i<m; i++)
         a[i] = (double *)malloc(n * sizeof( *a[i]));

 return a;
}
//End function for matrix creation


//Defining the function for reading matrix 
void readMat(double **p, int m,int n)
{
 int i,j;
 for(i=0;i<m;i++)
 {
  for(j=0;j<n;j++)
  {
   scanf("%lf",&p[i][j]);
  }
 }
}
//End function for reading matrix

//Read  matrix from file
double **loadtxt(char *str,int m,int n)
{
FILE *fp;
double **a;
int i,j;


a = createMat(m,n);
fp = fopen(str, "r");

 for(i=0;i<m;i++)
 {
  for(j=0;j<n;j++)
  {
   fscanf(fp,"%lf",&a[i][j]);
  }
 }
//End function for reading matrix from file

fclose(fp);
 return a;

}


//Defining the function for printing
void print(double **p, int m,int n)
{
 int i,j;

 for(i=0;i<m;i++)
 {
  for(j=0;j<n;j++)
  printf("%lf ",p[i][j]);
 printf("\n");
 }
}
//End function for printing

//Defining the function for norm

double linalg_norm(double **a, int m)
{
int i;
double norm=0.0;

 for(i=0;i<m;i++)
 {
norm = norm + a[i][0]*a[i][0];
}
return sqrt(norm);

}
