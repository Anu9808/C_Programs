#include<stdio.h>
#include<stdlib.h>

struct node
{
    int vertex;
    struct node *next;

};
struct list_entry
{
    struct node *head;
    struct node *tail;
};

struct list_entry list_enteries[34000];

void init_list_enteries()
{
    int i;
    for(i=0;i<100;i++)
    {
        list_enteries[i].head = NULL;
        list_enteries[i].tail = NULL;

    }
}

struct node * make_node( int data)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp -> vertex = data;
    temp -> next = NULL;

    return temp;

}

void insert_at_end(int a, int b)
{
    struct node *node1;
    struct node *node2;

    node1 = make_node(a);
    if(list_enteries[b].head == NULL)
    {
        list_enteries[b].head = node1;
        list_enteries[b].tail = node1;

    }
    else
    {
        list_enteries[b].tail -> next = node1;
        list_enteries[b].tail = node1;
    }
    node2 = make_node(b);
    if(list_enteries[a].head == NULL)
    {
        list_enteries[a].head = node2;
        list_enteries[a].tail = node2;
    }
    else
    {
        list_enteries[a].tail -> next = node1;
        list_enteries[a].tail = node1;
    }

    return;

}
void print_adjacent_vertices_of(int n)
{
    struct node *current = list_enteries[n].head;
    while(current != NULL)
    {
        printf("%d\n",current ->vertex);
        current = current -> next;
    }
    return;

}

int main()
{
    int a,b,n,i=0;
    int num;
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        scanf("%d",&a);
        scanf("%d",&b);
        insert_at_end(a,b);
    }
    scanf("%d",&n);
    print_adjacent_vertices_of(n);
}


