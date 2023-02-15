
double **createMat1(int m,int n);
double *createMat(int m); // function for creating an array
void pmf(char *str, double **a,int m,int n); //function for printing matrix in file
void readMat(double **a,int m,int n);
double s(int a,int b,int c,int d,int e);
void printMat(double **p,int m,int n);
double **linalg_sub(double **a, double **b, int m, int n);


double **linalg_sub(double **a, double **b, int m, int n)
{
int i, j;
double **c;
c = createMat1(m,n);

 for(i=0;i<m;i++)
 {
  for(j=0;j<n;j++)
  {
c[i][j]= a[i][j]-b[i][j];
  }
 }
return c;

}


void printMat(double **p,int m,int n)
{
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{

			printf("%lf\n",p[i][j]);
			
		}
	}
}


void readMat(double **a,int m,int n)
{

int i,j;

for(i=0;i<m;i++)
{
	for(j=0;j<n;j++)
	{
		scanf("%lf",&a[i][j]);
	}

}
}


double s(int a,int b,int c,int d,int e)
{
	

	return 2*d-b;
}


int solve(int a,int b,int c)  //Function for solving algebraic expression of having one variqble.
{

	return (c-b)/a;
}

//Defining the function for matrix creation



double **createMat1(int m,int n)
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

double *createMat(int m) // function for creating an array
{
 int i;
 double *a;
 
 //Allocate memory to the pointer
a = (double *)malloc(m * sizeof(double));
 return a;
}
void pmf(char *str, double **a,int m,int n)  //function for printing matrix in file
{
int i,j;
FILE *fp;

fp = fopen(str,"w");
for (i = 0; i < m; i++)
{
for(j=0;j<n;j++)
{
fprintf(fp,"%lf\n",a[i][j]);
}
}
}
