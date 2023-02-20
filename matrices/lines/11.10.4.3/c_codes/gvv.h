//Function declaration
double **createMat(int m,int n);
void print(double **p,int m,int n);
void pmf(char *str, double **a,int r,int c); 
void pmf1(char *str,double r); 
//End function declaration
double **f(int a,int b,int c); // function for solving quadratic equations
double **g(double **a,double **r);
double **h(double **a,double **r);
double **m(double **a,double **r);
double **n(double **a,double **r);


double **g(double **a,double **r)
{
	int i,j;
	a[0][0]=r[0][0];
	a[1][0]=0;

	return a;
}

double **h(double **a,double **r)
{
	int i,j;
	a[0][0]=0;
	a[1][0]=r[1][0];

	return a;
}
double **m(double **a,double **r)
{
	int i,j;
	a[0][0]=r[1][0];
	a[1][0]=0;

	return a;
}

double **n(double **a,double **r)
{
	int i,j;
	a[0][0]=0;
	a[1][0]=r[0][0];

	return a;
}

double **f(int a,int b,int c)  // function for solving quadratic equations
{
	double **r;
	r=createMat(2,1);
	r[0][0]=(-1*b+sqrt(b*b - 4*a*c))/2*a;
	r[1][0]=(-1*b-sqrt(b*b - 4*a*c))/2*a;
	return r;
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
