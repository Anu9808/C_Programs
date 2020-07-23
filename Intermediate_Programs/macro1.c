#include<stdio.h>
#define ABS(a) a<0? -(a):a
int main()
{
    int n;
    printf("Enter the no.");
    scanf("%d",&n);
    printf("The Absolute of no.%d is:%d",n,ABS(n));
    return 0;
}
