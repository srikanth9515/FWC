
struct Node
{
    int data;
    struct Node* next;
};



void push(struct Node** head_ref, int new_data);
int *subtractLists(struct Node* l1, struct Node* l2);
int norm(struct Node* l1);
void check(double n1,double n2,double n3);
void print(int *A,int n);
int *createMat(int m);
void readMat(int *p, int m);
void pmf(char *str, int *a,int len); //function for printing matrix in file


void print(int *A,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d",A[i]);
	}
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

void check(double n1,double n2,double n3)
{
    if(n1==n2 || n1==n3)
    {
	    printf("The given coordinates are isoceles triangle");
    }
    else
    {
	    printf("The given coordinates are not belongs to isoceles triangle");
    }


}
int *createMat(int m)
{
	int *A;
	A=(int *)malloc(m*sizeof(int));

	return A;
}

void readMat(int *A,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
}
// function for pusing the values in stacks using linked lists
void push(struct Node** head_ref, int new_data)
{
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}
// function for subtraction of two linked lists
int *subtractLists(struct Node* l1, struct Node* l2) 

{
	int *A;
	A=(int *)malloc(2*sizeof(int));
    struct Node *temp1 = l1, *temp2 = l2;
    int diff,i=0;
    while (temp1 != NULL && temp2 != NULL)
    {
        diff = temp1->data - temp2->data;
	A[i]=diff;
        printf("%d ", diff);
        temp1 = temp1->next;
        temp2 = temp2->next;
	i++;
    }

    return A;
}

// function for finding norm using linked lists
int norm(struct Node* l1)
{
	struct Node *temp1 = l1;
	double norm=0.0;
	double result;
	while(temp1!=NULL)
	{
		norm=norm+(temp1->data)*(temp1->data);
		temp1 = temp1 -> next;
	}
	result=sqrt(norm);
	return result;
}
