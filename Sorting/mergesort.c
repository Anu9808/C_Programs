#include<stdio.h>
#include<stdlib.h>
int mergesort(int*,int,int);
int merge(int*,int ,int,int );
int main()
{
    int* a;
    int n,k;
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
       mergesort(a,0,n-1);
      printf("The sorted array is\t\t\n");
          for(k=0;k<n;k++)
            {
                printf("%d\t",a[k]);
            }
    free(a);
    return 0;
}
int mergesort(int*a,int p,int r)
{
    int mid;
    if(p<r)
    {
        mid=(p+r)/2;
        mergesort(a,p,mid);
        mergesort(a,mid+1,r);
        merge(a,p,mid,r);
    }
}

int merge(int*a,int p,int mid,int r)
{
    int i,j,k;
    int list[r];
    i=p;
    j=mid+1;
    k=0;
    while((i<=mid)&&(j<=r))
    {
        if(a[i]<=a[j])
             {
                list[k]=a[i];
                i++;
                k++;
             }
        else
            {
                list[k]=a[j];
                j++;
                k++;
            }
    }
        while(i<=mid)
            {
                list[k]=a[i];
                i++;
                k++;
            }
        while(j<=r)
            {
                list[k]=a[j];
                j++;
                k++;
            }
for(k=p,i=0;k<=r;k++,i++)
{
    a[k]=list[i];
}
 return 0;

}




