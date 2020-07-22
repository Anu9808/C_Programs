#include<stdio.h>
#include<stdlib.h>

void push(int a[],int* top,int size)
{
    int key,i;
    printf("Enter the element which u want to push");
    scanf("%d",&key);
    if(*top==size)
        printf("The stack is gonna overload");
    else
        a[++*top]=key;
    printf("The Updated stack is:\t");
    for(i=*top;i>-1;i--)
        printf("%d\t",a[i]);
        printf("\n");
}
void pop(int a[],int* top)
{
    int temp,i;
    if(*top<0)
        printf("The stack is empty\n");
    else
    {
       temp=a[*top];
       *top-=1;
       printf("The Updated stack is:\t");
       for(i=*top;i>-1;i--)
        printf("%d\t",a[i]);
    }
       printf("\n");
}


int main()
{
    int n,a[10],top=-1,size=4;
    printf("****1. Push operation****\n");
    printf("****2. pop operation****\n");
    printf("****3. exit operation****\n");
    do{
        printf("enter the choice:\t");
        scanf("%d",&n);
        switch(n)
        {
            case 1: push(a,&top,size);
                    break;
            case 2: pop(a,&top);
                    break;
            case 3: printf("For exit");
                    break;

            default: printf("enter the valid choice");
        }
    }
        while(n!=3);
 return 0;
}
