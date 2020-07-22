#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,n,m;

    printf("enter the value of row");
    scanf("%d",&n);
    m= (n/2)+1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
          if((i<m)&&((j <=i)||(j >=(n+1)-i)))
          {
             printf("%d ",i);
          }
          else if((i>=m)&&((j<=(n+1)-i)||(j>=i)))
          {
              printf("%d ",i);
          }
          else{

              printf("  ");
          }

        }
        printf("\n");
    }

}






