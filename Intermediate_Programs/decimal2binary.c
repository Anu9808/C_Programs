#include<stdio.h>
int main()
{
    int m,n,i,j,bin[10];
    printf("Enter the decimal no.");
    scanf("%d",&m);
    printf("The binary is:");
    n=m;
    j=0;
    while(n>0)
    {
       i=n%2;       //for octal, hexadecimal replace 2 with 8,16 repectively
       bin[j]=i;
       n=n/2;
       j++;
    }
    for(i=j-1;i>=0;i--)
    {
        printf("%d",bin[i]);
    }
return 0;
}
