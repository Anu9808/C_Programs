#include<stdio.h>
int main()
{
    int n,f=1;
    printf("Enter the no");
    scanf("\t%d",&n);
    if(n==0)
      printf("factorial=1");
    else
    {
        while(n>1)
        {
            f = f*n;
            n--;
        }
      printf("\nfactorial=%d",f);
    }
  return 0;
}
