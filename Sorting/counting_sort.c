#include<stdio.h>
void count(int a[],int b[],int k,int n);
int main()
{
    int a[20],b[20],k,i,n;
    printf("Enter the no. of elements:\t");
    scanf("%d",&n);
    printf("\nEnter the array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    k=a[0];
    for(i=0;i<n;i++)
    {
        if(k<=a[i])
        {
            k=a[i];
        }
    }
    count(a,b,k+1,n);
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",b[i]);
    }
    return 0;
}
void count(int a[],int b[],int k,int n)
{
    int c[k],i,j;
    for(i=0;i<k;i++)
        c[i]=0;
    for(j=0;j<n;j++)
        c[a[j]]+=1;

    for(i=1;i<k;i++)
        c[i]=c[i]+c[i-1];

    for(j=n-1;j>=0;j--)
        {
            b[c[a[j]]-1]=a[j];
            c[a[j]]=c[a[j]]-1;
        }
}


