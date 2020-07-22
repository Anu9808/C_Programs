
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,n,k;

    printf("enter the value of row");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        k=0;
        for(j=1;j<=2*n-1;j++)
        {
          if((j >=(n+1)-i)&&(j <=(n-1)+i))
          {
              if(j<=n){
                        printf(" %d ",++k);
                      }
              else{
                        printf(" %d ",--k);
              }

          }
          else{

              printf(" ");
               printf(" ");
              printf(" ");
          }

        }
        printf("\n");
    }

}




