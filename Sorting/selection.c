#include<stdio.h>
#define SIZE 10
int selec(int*,int);
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
       selec(a,n);
       printf("The sorted array is\t\t\n");
          for(k=0;k<n;k++)
            {
                printf("%d\t",a[k]);
            }

    return 0;
}

int selec(int* a,int n)
{
    int i,j,temp;
    int*p=a,m=n;
    for(i=0;i<m;i++)
    {
        for(j=i+1;j<m;j++)
        {
            if(p[i]>p[j])
            {
               temp=p[i];
               p[i]=p[j];
               p[j]=temp;
            }
        }
    }
    return 0;
    }
