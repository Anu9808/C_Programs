#include<stdio.h>
#include<stdlib.h>
int binary(int*,int,int,int);
int bubble(int*, int);
int main()
{
    int* a;
    int high,k,low,key,flag;
    printf("Enter the no. of elements\t\t\n");
    scanf("%d",&high);
    low=0;
    a=(int*)malloc(high*sizeof(int));
    printf("\nEnter the list elements\n");
    for(k=0;k<high;k++)
      {
        scanf("%d",&a[k]);
      }
     printf("The list of no. is\t\n");
      for(k=0;k<high;k++)
      {
        printf("%d\t",a[k]);
      }
       bubble(a,high);
       printf("\n");
       printf("Binary search begins");
       printf("\nEnter the key\t");
       scanf("%d",&key);
       flag=binary(a,low,high,key);
       if(flag<0)
            printf("key is not found");
       else
          printf("The key %d is found",a[flag]);
    free(a);
    return 0;
}
int binary(int*a,int low,int high,int key)
{    int mid;
  if(low<=high)
   {
     mid=(low+high)/2;
     if(key == a[mid])
        return mid;
     else{
            if(key<a[mid])
                return binary(a,low,high=mid-1,key);
            else(key>a[mid]);
                return binary(a,low=mid,high,key);
         }
   }
     if(low>high)
          return -1;
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
}
