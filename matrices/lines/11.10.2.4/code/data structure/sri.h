struct node {
    int data;
    int row;
    int col;
    struct node* next;
};


int **createMat1(int m,int n);
void readMat(int **p, int m,int n);
void print(int **p, int m,int n);
struct node* create_node(int data, int row, int col);
struct node* create_sparse(int** mat, int m, int n);
void print_sparse(struct node* head);
int  **mul(struct node* head1, struct node* head2, int m1, int n1, int m2, int n2);
void save(struct node *head,char *str,int r,int c);
void pmf(char *str, int **a,int r,int c); 


int **createMat1(int m,int n)
{
 int i;
 int **a;
 
 //Allocate memory to the pointer
a = (int **)malloc(m * sizeof( *a));
    for (i=0; i<m; i++)
         a[i] = (int *)malloc(n * sizeof( *a[i]));

 return a;
}

void pmf(char *str, int **a,int r,int c)  
{
int i,j;
FILE *fp;

fp = fopen(str,"w");
for (i = 0; i < r; i++)
{
	for(j=0;j<c;j++)
	{

fprintf(fp,"%d\n",a[i][j]);
	}
}
}
void readMat(int **p, int m,int n)
{
 int i,j;
 for(i=0;i<m;i++)
 {
  for(j=0;j<n;j++)
  {
   scanf("%d",&p[i][j]);
  }
 }
}


void print(int **p, int m,int n)
{
 int i,j;

 for(i=0;i<m;i++)
 {
  for(j=0;j<n;j++)
  printf("%d ",p[i][j]);
 printf("\n");
 }
}
// node structure for storing matrix element and indices

// function to create new node
struct node* create_node(int data, int row, int col) {
    struct node* new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = data;
    new_node->row = row;
    new_node->col = col;
    new_node->next = NULL;
    return new_node;
}

// function to create sparse matrix using linked list
struct node* create_sparse(int** mat, int m, int n) {
    struct node* head = NULL;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (mat[i][j] != 0) {
                struct node* new_node = create_node(mat[i][j], i, j);
                if (head == NULL) {
                    head = new_node;
                }
                else {
                    struct node* curr = head;
                    while (curr->next != NULL) {
                        curr = curr->next;
                    }
                    curr->next = new_node;
                }
            }
        }
    }
    return head;
}

// function to print sparse matrix
void print_sparse(struct node* head)
{
    if (head == NULL) {
        printf("Sparse matrix is empty!\n");
        return;
    }
    struct node* curr = head;
    while (curr != NULL) 
    {
        printf("%d ", curr->data);
        curr = curr->next;
    }
    printf("\n");
}

// function to multiply two matrices
int  **mul(struct node* head1, struct node* head2, int m1, int n1, int m2, int n2) {
    if (n1 != m2) {
        printf("Matrices cannot be multiplied!\n");
        return 0;
    }
    int **res;
    res=createMat1(m1,n2);
    for (int i = 0; i < m1; i++) {
        for (int j = 0; j < n2; j++) {
            res[i][j] = 0;
        }
    }
    struct node* curr1 = head1;
    while (curr1 != NULL) {
        struct node* curr2 = head2;
        while (curr2 != NULL) {
            if (curr1->col == curr2->row) {
                res[curr1->row][curr2->col] += (curr1->data * curr2->data);
            }
            curr2 = curr2->next;
        }
        curr1 = curr1->next;
    }
    return res;
    
}
void save(struct node *head,char *str,int r,int c)
{
	FILE *fp;
	fp = fopen(str,"w");
        struct node* current = head;
	int i,j;
	while(current!=NULL)
	{
	//for(i=0;i<r;i++)
	//{
		for(j=0;j<c;j++)
		{
			fprintf(fp,"%d\n",current->data);
		}
	//}
            current = current->next;
	}
}

