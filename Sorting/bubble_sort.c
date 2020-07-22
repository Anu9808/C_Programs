#include<stdio.h>
#define SIZE 10
int bubble(int*,int);
int main()
{
    int a[SIZE],n,k;
    printf("Enter the no. of elements\t\t\n");
    scanf("%d",&n);
    printf("\nEnter the array elements\n");
    for(k=0;k<n;k++)
      {
        scanf("%d",&a[k]);
      }
     printf("The unsorted array is\t\a\n");
      for(k=0;k<n;k++)
      {
        printf("%d\t",a[k]);
      }
       printf("\n");
       bubble(a,n);
       printf("The sorted array is\t\t\n");
          for(k=0;k<n;k++)
            {
                printf("%d\t",a[k]);
            }

    return 0;
}

int bubble(int* p,int n)
{
    int i,j,temp;
    int m=n;
    for(i=0;i<m;i++)
    {
        for(j=0;j<m-i-1;j++)
        {
            if(p[j]>p[j+1])
            {
               temp=p[j];
               p[j]=p[j+1];
               p[j+1]=temp;
            }
        }
    }
    return 0;
}
