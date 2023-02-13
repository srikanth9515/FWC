void pmf(char *str, int *a,int len); //function for printing matrix in file

void print1(int *a,int len);
int solve(int a,int b,int c);
int solve(int a,int b,int c)
{

	return (c-b)/a;
}

void print1(int *a,int len)
{
	int i;
	for(i=0;i<len;i++)
	{
		printf("%d ",a[i]);
	}
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

