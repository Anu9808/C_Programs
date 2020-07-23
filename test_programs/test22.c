#include <stdio.h>
#include <stdlib.h>

typedef struct DoublyLinkedList{

	int data;

	struct DoublyLinkedList *prev;

	struct DoublyLinkedList *next;

} st;



/*

 --------------------------

  Create a new node

 --------------------------

*/

struct DoublyLinkedList *createNode(int n)

{

	struct DoublyLinkedList *newNodeptr;

	newNodeptr = (struct DoublyLinkedList*)

		malloc (sizeof(struct DoublyLinkedList));

	newNodeptr->data = n;

	newNodeptr->prev = NULL;

	newNodeptr->next = NULL;

	return newNodeptr;

}



/*

 --------------------------------

 add a node at the end of a doubly linked list.

 Tailptr is the address of the pointer to the end of the current list.

 After adding the node, tail points to the new node inserted.

 --------------------------------

*/

void appendNode ( struct DoublyLinkedList **tailptr, int n )

{

	struct DoublyLinkedList *newNode;

	newNode = createNode ( n );

	newNode->prev=*tailptr;



	(*tailptr)->next = newNode;



	*tailptr=newNode;

}



void initializeList (

	struct DoublyLinkedList **headptr,

	struct DoublyLinkedList **tailptr,

	int n)

{

	struct DoublyLinkedList *newNode;

	newNode=createNode(n);

	*headptr=newNode;

	*tailptr=newNode;

	return;

}



void printList(

	struct DoublyLinkedList *head,

	struct DoublyLinkedList *tail)

{

	struct DoublyLinkedList *curr=head;



	while ( curr != NULL ){

                if(curr->next!=NULL)

		printf("%d,",curr->data);

                else printf("%d",curr->data);

		curr = curr->next;

	}



	return;

}



/*

 --------------------------------

 remove the node that ptr points to.

 After removing the first node, we should reset head.

 After removing the last node, we should reset tail.

 --------------------------------

*/

void removeData(st **head, st **tail,int data )
{
    int pos =0;
    st *pre_node;

    if((*head)->data == data)
    {
        if((*head)->next != NULL){
            (*head)->next->prev = NULL;
            *head = (*head)->next;
            return;
        }
        else{
            *head = NULL;
            return;

        }

   }
   else if((*head)->data != data && (*head)->next == NULL)
    {
        return;
    }

    st *curr = *head;
    while(curr->next != NULL && curr->data != data){

        pre_node = curr;
        curr = curr->next;
    }

    if(curr->data == data){

        pre_node->next =  pre_node->next->next;

        if(pre_node->next != NULL){
            pre_node->next->prev = pre_node;
        }
        else
            *tail = pre_node;

        free(curr);
    }

}

int main()

{

	int n;

	int i=0;

	int m;

	struct DoublyLinkedList *head, *tail;



	scanf("%d",&n);



	if ( n <= 0 ){

		return 0;

	}



	scanf("%d",&m);

	initializeList(&head,&tail,m);





	for(i=1;i<n;i++){ /* read the remaining elements */

		scanf("%d",&m);

		appendNode(&tail,m);

	}

  	scanf("%d",&n);

	removeData ( &head, &tail, n );

	printList(head,tail);

	return 0;

}
