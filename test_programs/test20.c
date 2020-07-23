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
        printf("%d ",temp->key);
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
       int i,n,t,s=0;
       int a[100];
       scanf("%d",&t);

       while(t != -1){
            a[s++]=t;
            scanf("%d",&t);
       }
       for(i=0;i<s;i++)
        {
           if(i==0)
              head = insert(head,a[i]);
           else
           insert(head,a[i]);
        }

     scanf("%d",&n);

     if(n>s)
        printf("%d",-1);

     else{
            for(i=0;i<(s-n);i++)
            {
                del_at_start(head);
            }
            traversal(head);
        }


    return 0;
}
