#include<stdio.h>
int main()
{
    int a[]={2,4,7,8,5,9,6};
    int n,i,temp;
    n = sizeof(a)/sizeof(a[0]);
    printf("%d\n",n);

    for(i=0;i<n/2;i++)
    {
        temp = a[n-1-i];
        a[n-1-i] = a[i];
        a[i] = temp;
    }
    for(i=0;i<n;i++)
        printf("%d",a[i]);

 return 0;
}
