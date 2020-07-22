#include<stdio.h>
#include<stdlib.h>
int insert(int*,int);
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
       insert(a,n);
       printf("The sorted array is\t\t\n");
          for(k=0;k<n;k++)
            {
                printf("%d\t",a[k]);
            }
    free(a);
    return 0;
}

int insert(int* a,int n)
{
    int i,j,key;
    for(i=1;i<n;i++)
    {
        key=a[i];
        j=i-1;
        while(a[j]>key&&j>=0)
            {
                a[j+1]=a[j];
                j--;
            }
            a[j+1]=key;
    }
    return 0;
}
