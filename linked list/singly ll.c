#include<stdio.h>
#include<stdlib.h>

typedef struct node{

  int key;
  struct node *next;

}st;

st *head = NULL;
void traversal( st *head)
{
    st *temp;
    temp= head;
    while(temp != NULL)
    {
        printf("%d ->",temp->key);
        temp = temp->next;
    }

}
st *newNode(int key)
{
    st *temp = (st *)malloc(sizeof(st));
     temp->key =key;
     temp->next=NULL;

  return temp;
}

void del_at_start()
{
    st *temp;
    temp = head;
    head =temp->next;
    free(temp);

}
st *insert(st *head ,int key)
{

        if(head == NULL){
           return newNode(key);}

        else{
                head->next= insert(head->next,key);
        }

   return head;
}

int main()
{

    head = insert(head,20);
       insert(head,60);
       insert(head,30);
       insert(head,50);
        insert(head,60);
         insert(head,70);

    traversal(head);
    printf("deletion begins");
    del_at_start(head);
    del_at_start(head);
     traversal(head);
    return 0;
}
