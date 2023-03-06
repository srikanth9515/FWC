
typedef struct Node {
    int value;
    int row;
    int col;
    struct Node* next;
} Node;





Node* createNode(int value, int row, int col); 
void insert_node(Node **head, int row, int col, int val);
Node* createMatrix(int numRows, int numCols);
void print(Node *head);
Node *sub(Node *a, Node *b);
Node *transpose_matrix(Node *head);
double Norm(Node* head, int numRows, int numCols);
void check(int d1,int d2);
Node* assign(int numRows, int numCols,int *array);
int *s(int a,int b,int c,int d,int e,int f);
void save(Node *head,char *str,int r,int c);
Node* createMatrix1(int numRows, int numCols);
Node** matrixMul(Node** matrix1, int rows1, int cols1, Node** matrix2, int rows2, int cols2);







Node* createMatrix1(int numRows, int numCols) {
    Node* head = NULL;
    Node* currentRow = NULL;

    // Loop through each row
    for (int i = 0; i < numRows; i++) {
        Node* newRow = NULL;
        Node* currentCol = NULL;

        // Loop through each column in the current row
        for (int j = 0; j < numCols; j++) {
            int value;
            printf("Enter the value at position (%d,%d): ", i, j);
            scanf("%d",&value);


            // If the value is not 0, create a new node and add it to the matrix
            if (value != 0) {
                Node* newNode = createNode(value, i, j);
                if (newRow == NULL) {
                    newRow = newNode;
                    currentCol = newNode;
                } else {
                    currentCol->next = newNode;
                    currentCol = newNode;
                }
            }
        }

        // If the current row is not empty, add it to the matrix
        if (newRow != NULL) {
            if (head == NULL) {
                head = newRow;
                currentRow = newRow;
            } else {
                currentRow->next = newRow;
                currentRow = newRow;
            }
        }
    }

    return head;
}

int *s(int a,int b,int c,int d,int e,int f)
{
 int *x;
 x=(int *)malloc(sizeof(int));
 int i;
 x[0]=c-a+e;
 x[1]=b+b-a;

 return x;
}
void pmf(char *str, double a)  //function for printing matrix in file
{
FILE *fp;

fp = fopen(str,"w");
fprintf(fp,"%lf\n",a);
}


Node* createNode(int value, int row, int col) 
{
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->value = value;
    newNode->row = row;
    newNode->col = col;
    newNode->next = NULL;
    return newNode;
}

void insert_node(Node **head, int row, int col, int val) {
    Node *new_node = (Node *) malloc(sizeof(Node));
    new_node->row = row;
    new_node->col = col;
    new_node->value = val;
    new_node->next = NULL;

    if (*head == NULL) {
        *head = new_node;
        return;
    }

    Node *current = *head;
    while (current->next != NULL) {
        current = current->next;
    }

    current->next = new_node;
}
// Function to create a matrix using linked lists
Node* createMatrix(int numRows, int numCols) {
    Node* head = NULL;
    Node* currentRow = NULL;

    // Loop through each row
    for (int i = 0; i < numRows; i++) {
        Node* newRow = NULL;
        Node* currentCol = NULL;

        // Loop through each column in the current row
        for (int j = 0; j < numCols; j++) {
            int value;
            //printf("Enter the value at position (%d,%d): ", i, j);
            value=0;


            // If the value is not 0, create a new node and add it to the matrix
            if (value != 0) {
                Node* newNode = createNode(value, i, j);
                if (newRow == NULL) {
                    newRow = newNode;
                    currentCol = newNode;
                } else {
                    currentCol->next = newNode;
                    currentCol = newNode;
                }
            }
        }

        // If the current row is not empty, add it to the matrix
        if (newRow != NULL) {
            if (head == NULL) {
                head = newRow;
                currentRow = newRow;
            } else {
                currentRow->next = newRow;
                currentRow = newRow;
            }
        }
    }

    return head;
}

Node* assign(int numRows, int numCols,int *array)
{
    Node* head = NULL;
    Node* currentRow = NULL;

    // Loop through each row
    for (int i = 0; i < numRows; i++) 
    {
        Node* newRow = NULL;
        Node* currentCol = NULL;

        // Loop through each column in the current row
        for (int j = 0; j < numCols; j++)
	{
            int value;
	    int index=0;
            //printf("Enter the value at position (%d,%d): ", i, j);
            //scanf("%d", &value);
	    value=array[i];
	    


            // If the value is not 0, create a new node and add it to the matrix
            if (value != 0)
	    {
                Node* newNode = createNode(value, i, j);
                if (newRow == NULL) {
                    newRow = newNode;
                    currentCol = newNode;
                } 
		else
		{
                    currentCol->next = newNode;
                    currentCol = newNode;
                }
            }
        }

        // If the current row is not empty, add it to the matrix
        if (newRow != NULL) {
            if (head == NULL) {
                head = newRow;
                currentRow = newRow;
            } else {
                currentRow->next = newRow;
                currentRow = newRow;
            }
        }
    }

    return head;
}



void print(Node *head) {
    if (head == NULL) {
        printf("Empty matrix\n");
        return;
    }

    int max_row = head->row;
    int max_col = head->col;

    Node *current = head;
    while (current != NULL) {
        if (current->row > max_row) {
            max_row = current->row;
        }
        if (current->col > max_col) {
            max_col = current->col;
        }
        current = current->next;
    }

    for (int i = 0; i <= max_row; i++) {
        for (int j = 0; j <= max_col; j++) {
            current = head;
            int val;
            while (current != NULL) {
                if (current->row == i && current->col == j) {
                    val = current->value;
                    break;
                }
                current = current->next;
            }
            printf("%d ", val);
        }
        printf("\n");
    }
}



Node *sub(Node *a, Node *b) {
    Node *result = NULL;

    while (a != NULL && b != NULL) {
        if (a->row < b->row || (a->row == b->row && a->col < b->col)) {
            insert_node(&result, a->row, a->col, a->value);
            a = a->next;
        } else if (a->row == b->row && a->col == b->col) {
            int val = a->value - b->value;
            if (val != 0) {
                insert_node(&result, a->row, a->col, val);
            }
            a = a->next;
            b = b->next;
        } else {
            insert_node(&result, b->row, b->col, -b->value);
            b = b->next;
        }
    }

    while (a != NULL) {
        insert_node(&result, a->row, a->col, a->value);
        a = a->next;
    }

    while (b != NULL) {
        insert_node(&result, b->row, b->col, -b->value);
        b = b->next;
    }

    return result;
}

Node *transpose_matrix(Node *head) {
    Node *result = NULL;
    Node *current = head;

    while (current != NULL) {
        insert_node(&result, current->col, current->row, current->value);
        current = current->next;
    }

    return result;
}


            // If the dot product is not 0, create a new node and add it to the matrix


double Norm(Node* head, int numRows, int numCols)
{
    double sumOfSquares = 0;

    // Loop through each column
    for (int j = 0; j < numCols; j++) 
    {
        double colSum = 0;

        // Loop through each element in the column
        Node* current = head;
        while (current != NULL) 
	{
            if (current->col == j) 
	    {
                colSum += pow(current->value, 2);
            }
            current = current->next;
        }

        sumOfSquares += colSum;
    }
    return sqrt(sumOfSquares);
}


void check(int d1,int d2)
{
	if(d1!=d2)
	{
		printf("The parallelogram is satisfied ");
	}
	else
	{
		printf("The parallelogram is not satisfied ");
	}
}


void save(Node *head,char *str,int r,int c)
{
	FILE *fp;
	fp = fopen(str,"w");
        Node* current = head;
	int i,j;
	while(current!=NULL)
	{
	//for(i=0;i<r;i++)
	//{
		for(j=0;j<c;j++)
		{
			fprintf(fp,"%d\n",current->value);
		}
	//}
            current = current->next;
	}
}


// Multiply two matrices represented as linked lists
Node** matrixMul(Node** matrix1, int rows1, int cols1, Node** matrix2, int rows2, int cols2) {
    if (cols1 != rows2) {
        printf("Error: the number of columns in the first matrix must be equal to the number of rows in the second matrix.\n");
        return NULL;
    }
    Node** result = (Node**)malloc(sizeof(Node*) * rows1);
    for (int i = 0; i < rows1; i++) {
        result[i] = NULL;
    }
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            int sum = 0;
            Node* curr1 = matrix1[i];
            Node* curr2 = matrix2[j];
            while (curr1 != NULL && curr2 != NULL) {
                if (curr1->col < curr2->row) 
		{
                    curr1 = curr1->nextCol;
                }
		else if (curr1->col > curr2->row)
		{
                    curr2 = curr2->nextRow;
                }
		else 
		{
                    sum += curr1->value * curr2->value;
                    curr1 = curr1->next;
		    curr2 = curr2->next;
		}
            insert_node(&result, result->row, result->col, result->value);
	    }
	}
    }
}





