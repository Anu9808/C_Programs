#include<stdio.h>
int main()
{
    int a[1000],n,count=1;
    int i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

     for(i=1;i<n;i++)
     {
         for(j=0;j<i;j++)
         {
             if(a[j] == a[i])
             {
                 break;

             }
         }
            if(i==j)
                count+=1;

     }

     printf("%d",count);


 return 0;
}

