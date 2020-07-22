#include<stdio.h>
int main()
{
    int a,b,n,k,m;
    printf("enter the two no:\t");
    scanf("%d\t%d",&a,&b);
    n=((a>b)?a:b);
    while(n<=(a*b))
    {
        if(n%a==0&&n%b==0)
            {   printf("l.c.m is =%d",n);
                break;
            }
        n++;
    }
    m=(a*b)/n;
    printf("\n");
    printf("The h.c.f.is = %d",m);
    return 0;
}
