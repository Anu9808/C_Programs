#include<stdio.h>
int sumdigit(int);
int main()
{
    int n,v;
    printf("Enter the num");
    scanf("%d",&n);
    v=sumdigit(n);
    printf("Sum of digits is%d\n",v);
    return 0;

}

int sumdigit(int n)
{
    int sum=0,i,r;
    r=n;
    while(r>0)
    {
        i=r%10;
        sum=sum+i;
        r=r/10;

    }
    return sum;
}
