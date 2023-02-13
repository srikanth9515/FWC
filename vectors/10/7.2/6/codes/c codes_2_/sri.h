double **createMat1(int m,int n);
double *createMat(int m); // function for creating an array
void pmf(char *str, int *a,int len); //function for printing matrix in file
int solve(int a,int b,int c); //Function for solving algebraic expression of having one variqble.
int *s(int a,int b,int c,int d,int e,int f);

int *s(int a,int b,int c,int d,int e,int f)
{
	int *x;
	x=(int *)malloc(sizeof(int));
	int i;
	x[0]=c-a+e;
	x[1]=b+b-a;

	return x;
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
void pmf(char *str, int *a,int len)  //function for printing matrix in file
{
int i;
FILE *fp;

fp = fopen(str,"w");
for (i = 0; i < len; i++)
{
fprintf(fp,"%d\n",a[i]);
}
}
