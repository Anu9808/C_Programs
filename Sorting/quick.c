#include<stdio.h>
#include<stdlib.h>
int quick(int*,int,int);
int partition(int*,int ,int );
int main()
{
    int* a;
    int n,p,r,k;
    printf("Enter the no. of elements\t\t\n");
    scanf("%d",&n);
    a=(int*)malloc(n*sizeof(int));
    printf("\nEnter the array elements\n");
    for(k=0;k<n;k++)
      {
        scanf("%d",&a[k]);
      }
     printf("The unsorted array is\t\n");
      for(k=0;k<n;k++)
      {
        printf("%d\t",a[k]);
      }
       printf("\n");
       p=0;
       r=n-1;
       quick(a,p,r);
       printf("The sorted array is\t\t\n");
          for(k=0;k<n;k++)
            {
                printf("%d\t",a[k]);
            }
    free(a);
    return 0;
}
int quick(int*a,int p,int r)
{
    int q;
    if(p<r)
    {
        q=partition(a,p,r);
        quick(a,p,q-1);
        quick(a,q+1,r);
    }
}

int partition(int*a,int p,int r)
{
    int piv,i,t1,t2,j;
    piv=a[r];
    i=p-1;
    for(j=p;j<r;j++)
    {
        if(a[j]<=piv)
        {

          i++;
           t1=a[j];
          a[j]=a[i];
          a[i]=t1;

        }
    }
      t2=a[i+1];
      a[i+1]=a[r];
      a[r]=t2;
 return (i+1);
}




