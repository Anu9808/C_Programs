#include<stdio.h>
int main()
{
    int a,b,n;
    printf("enter the two no:  ");
    scanf("%d\t%d",&a,&b);
    while(a!=b)
    {
        if(a>b)
            a-=b;
        else
            b-=a;
    }

    printf("The GCD is=%d",a);
    return 0;
}
