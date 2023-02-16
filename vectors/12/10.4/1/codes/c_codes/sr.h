//Function declaration
void readMat(double *p, int m);
double linalg_norm(double *a, int m);
void print(double *p,int m);
double *createMat(int n);//Function for creating an arrary
double *cross(double *a,double *b,double *c);
double *createMat(int n);//Function for creating an arrary
void pmf(char *str, double *a,int len);//function for printing matrix in file
double *createMat(int n)
{
 int i;
 double *a;
 
 //Allocate memory to the pointer
a = (double *)malloc(n * sizeof(double));

 return a;
}

double *cross(double *a,double *b,double *c)
{

	c[0]=(a[1]*b[2]) - (b[1]*a[2]);
	c[1]=(b[0]*a[2]) - (a[0]*b[2]);
	c[2]=(a[0]*b[1]) - (b[0]*a[1]);

	return c;
}

void pmf(char *str, double *a,int len)//function for printing matrix in file
{
int i;
FILE *fp;

fp = fopen(str,"w");
for (i = 0; i < len; i++)
{
fprintf(fp,"%lf\n",a[i]);
}
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


//Defining the function for reading matrix 
void readMat(double *p, int m)
{
 int i;
 for(i=0;i<m;i++)
 {
   scanf("%lf",&p[i]);
 }
}
//End function for reading matrix

//Read  matrix from file


//Defining the function for printing
void print(double *p, int m)
{
 int i;

 for(i=0;i<m;i++)
 {

  printf("%lf ",p[i]);
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
