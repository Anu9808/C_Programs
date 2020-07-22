#include<stdio.h>
#include<stdlib.h>
void linear(int*,int);
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
     printf("The list of no. is\t\n");
      for(k=0;k<n;k++)
      {
        printf("%d\t",a[k]);
      }

       printf("\n");
       linear(a,n);
    free(a);
    return 0;
}
void linear(int*a,int n)
{
    int key,i,j=0;
     printf("Linear search begins");
     printf("\nEnter the key");
      scanf("%d",&key);
      for(i=0;i<n;i++)
      {
          if(key==a[i])
            j++;
      }
      if(j>0)
        printf("The key exists %d times",j);
      if(i==n&&j==0)
        printf("\nkey does not exist");
}
