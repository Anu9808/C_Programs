#include<stdio.h>
int main()
{

  int i,j,n,c,a[50][50];
  printf("Enter the size of matrix");
  scanf("%d",&n);
  for(i=0;i<n;i++)
        {for(j=0;j<n;j++)
            {
              scanf("%d",&a[i][j]);
            }
      	}
  for(i=0;i<n;i++)
    {
         for(j=0;j<n;j++)
            {
              printf(" %d",a[i][j]);
            }
             printf("\n");
    }
      c=n;

    for(i=0;i<n;i++)
        {for(j=0;j<n;j++)
            {
                if((i==j)&&(a[i][j]!=0))
                   {
                       c--;
                   }
        }    }
     if(c==0)
           printf("yes");
     else
           printf("no");
 return 0;
}
