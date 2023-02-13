//End function declaration
void pmf(char *str, int *a,int len); //function for printing matrix in file
int solve(int a,int b,int c);
void print1(int *a,int len);



int solve(int a,int b,int c)
{

	return (c-b)/a;
}


//Defining the function for matrix creation


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
void print1(int *a,int len)
{
	int i;
	for(i=0;i<len;i++)
	{
		printf("%d ",a[i]);
	}
}

