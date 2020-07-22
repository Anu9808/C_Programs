//Demonstration of malloc function
#include<stdio.h>
#include<stdlib.h>  //required for malloc function
#define SIZE 10
int main()
{
    int n,i;
    int*p;
    printf("Enter the no. of elements\n");
    scanf("%d",&n);
    printf("\nEnter the array");
    p =(int*)malloc(sizeof(int));
    for(i=0;i<n;i++)
    {
       scanf("%d",(p+i));
    }
     printf("\nThe printed array is\n");
     for(i=0;i<n;i++)
    {
       printf("%d\t",*(p+i));
    }
    free(p);
    return 0;
}





