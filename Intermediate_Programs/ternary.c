#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter three numbers");
    scanf("%d\t%d\t%d",&a,&b,&c);
    d= (a>b)?((a>c)?a:c):((b>c)?b:c);
    printf("The greatest no %d",d);
    return 0;
}
