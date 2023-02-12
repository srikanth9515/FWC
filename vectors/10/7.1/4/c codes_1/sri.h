double **createMat1(int m,int n);
void readMat(double **p, int m,int n);
void print(double **p,int m,int n);
double linalg_norm(double *a, int m);
double **matmul(double **a, double **b, int m, int n, int p);
double **transpose(double **a,  int m, int n);
double *createMat(int m); // function for creating an array
//End function declaration
void pmf(char *str, double *a,int len); //function for printing matrix in file
void print1(double *a,int len);
double *dir_vec(double *a,double *b,int m);

void print1(double *a,int len)
{
	int i;
	for(i=0;i<len;i++)
	{
		printf("%lf ",a[i]);
	}
}

double *dir_vec(double*a,double *b,int m){
double *c;
int i;
for(i=0;i<m;i++)
{
c[i]=a[i]-b[i];

}

return c;
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


void pmf(char *str, double *a,int len)  //function for printing matrix in file
{
int i;
FILE *fp;

fp = fopen(str,"w");
for (i = 0; i < len; i++)
{
fprintf(fp,"%lf\n",a[i]);
}
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

double linalg_norm(double *a, int m)
{
int i;
double norm=0.0;

 for(i=0;i<m;i++)
 {
norm = norm + a[i]*a[i];
}
return sqrt(norm);

}
//End function for norm

//Defining the function for difference of matrices

double **matmul(double **a, double **b, int m, int n, int p)
{
int i, j, k;
double **c, temp =0;
c = createMat1(m,p);

 for(i=0;i<m;i++)
 {
  for(k=0;k<p;k++)
  {
    for(j=0;j<n;j++)
    {
	temp= temp+a[i][j]*b[j][k];
    }
	c[i][k]=temp;
	temp = 0;
  }
 }
return c;

}
//End function for difference of matrices

//Defining the function for transpose of matrix

double **transpose(double **a,  int m, int n)
{
int i, j;
double **c;
//printf("I am here");
c = createMat1(n,m);

 for(i=0;i<n;i++)
 {
  for(j=0;j<m;j++)
  {
c[i][j]= a[j][i];
//  printf("%lf ",c[i][j]);
  }
 }
return c;

}
//End function for transpose of matrix

