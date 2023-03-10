
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
void check(double d1,double d2,double d3);
<<<<<<< HEAD

void pmf(char *str, double a)  //function for printing matrix in file
{
FILE *fp;

fp = fopen(str,"w");
fprintf(fp,"%lf\n",a);
}
=======
void save(Node *head,char *str,int r,int c);

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
>>>>>>> 

    if (*head == NULL) {
        *head = new_node;
        return;
    }

<<<<<<< HEAD
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
            printf("Enter the value at position (%d,%d): ", i, j);
            scanf("%d", &value);

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
=======
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
            printf("Enter the value at position (%d,%d): ", i, j);
            scanf("%d", &value);

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
>>>>>>> 
}



<<<<<<< HEAD

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

=======
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

>>>>>>> 
    return result;
}

Node *transpose_matrix(Node *head) {
    Node *result = NULL;
    Node *current = head;
<<<<<<< HEAD

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


void check(double d1,double d2,double d3)
{
	if(d1==d2 || d1 == d3)
	{
		printf("The triangle is Isoceles triangle ");
	}
	else
	{
		printf("The triangle is not Isoceles triangle ");
	}
}


void save(Node *head, const char *filename) 
{
    FILE *file = fopen(filename, "wb");
    if (file == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }
    // write the number of rows and columns in the matrix to the file
    int numRows = head->row + 1;
    int numCols = head->col + 1;
    fwrite(&numRows, sizeof(int), 1, file);
    fwrite(&numCols, sizeof(int), 1, file);
    // write the number of non-zero elements in the matrix to the file
    int count = 0;
    Node *current = head;
    while (current != NULL) {
        count++;
        current = current->next;
    }
    fwrite(&count, sizeof(int), 1, file);
    // write the row, column, and value of each non-zero element to the file
    current = head;
    while (current != NULL) 
    {
        fwrite(&(current->row), sizeof(int), 1, file);
        fwrite(&(current->col), sizeof(int), 1, file);
        fwrite(&(current->value), sizeof(int), 1, file);
        current = current->next;
    }
    fclose(file);
}

=======

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


void check(double d1,double d2,double d3)
{
	if(d1==d2 || d1 == d3)
	{
		printf("The triangle is Isoceles triangle ");
	}
	else
	{
		printf("The triangle is not Isoceles triangle ");
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






>>>>>>> 7bb7acd959a3825323c009e7b1d4ccdcb1c6a46a
