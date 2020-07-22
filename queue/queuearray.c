#include<stdio.h>
#include<stdlib.h>

void enqueue(int a[],int* first,int* last,int size)
{
    int key,i;
    printf("Enter the element which u want to push");
    scanf("%d",&key);
    if(*last==size)
        printf("The queue is gonna overload");
    else
        a[++*last]=key;
    if(*last==0)
    {
        *first=*last;
    }
    //printf("\n%d",*last);
    //printf("\n%d",*first);
    printf("The Updated queue is:\t");
    for(i=*first;i<=*last;i++)
        printf("%d\t",a[i]);
        printf("\n");
}
void dequeue
(int a[],int* first,int* last)
{
    int temp,i;
    if(*first<0||*first>*last)
        printf("The queue is empty\n");
    else
    {
       temp=a[*first];
       *first+=1;
       printf("The Updated queue is:\t");
        for(i=*first;i<=*last;i++)
        printf("%d\t",a[i]);
    }
       printf("\n");
}

int main()
{
    int n,a[10],first=-1,last=-1,size=9;
    printf("****1. enqueue operation****\n");
    printf("****2. dequeue operation****\n");
    printf("****3. exit operation****\n");
    do{
        printf("enter the choice:\t");
        scanf("%d",&n);
        switch(n)
        {
            case 1: enqueue(a,&first,&last,size);
                    break;
            case 2: dequeue(a,&first,&last);
                    break;
            case 3: printf("For exit");
                    break;

            default: printf("enter the valid choice");
        }
    }
        while(n!=3);
 return 0;
}
