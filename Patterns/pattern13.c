#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,m,n;

    printf("enter the value of row");
    scanf("%d",&n);
    m= (n/2)+1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
          if((i<=m)&&((j >=(m+1)-i)&&(j <=(m-1)+i)))
          {
             printf(" ");
          }
          else if((i>m)&&((j >(i-m))&&(j <(2*m-(i-m)))))
          {
             printf(" ");
          }
          else{

              printf("*");
          }

        }
        printf("\n");
    }
    return 0;
}






