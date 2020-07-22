#include<stdio.h>
void palin(int);
int main()
{
    int n;
    printf("Enter the no.");
    scanf("%d",&n);
    palin(n);
    return 0;
}
void palin(int n)
{
    int m,i,r,v=0;
    m=n;
    while(m>0)
    {
      r= m%10;
      v=v*10+r;
      m=m/10;
    }
    if(v==n)
        printf("No. is palindrome");
    else
        printf("not palindrome");
}
