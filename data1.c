#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node*next;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;


void InsertFirst(PPNODE head,int no)
{
	//Allocate memory for node
	//Initialized that node
	
	// Check whether LL is empty or not
	//if LL is empty then new node is the first node so update its address in frist ponter through head
	
	//IF LL is not empty then store the address of frist node in the next pointer of our new node 
	//Update the frist pointer through head
PNODE newn = NULL;

newn =(PNODE)malloc(sizeof(NODE));	

newn->data = no;
newn->next = NULL;

if(*head == NULL); //LL is empty
    {
	*head = newn;
    }
else 
    {
	  newn->next=*head;
	  *head = newn;
    }
}
int main()
{
	PNODE first = NULL;
	
	InsertFrist(&first,101);
	InsertFrist(&first,51);
	InsertFrist(&first,21);
	InsertFrist(&first,11);
	
	retrrn 0;
}