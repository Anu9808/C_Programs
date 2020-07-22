#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,n;
    printf("enter the value of col");
    scanf("%d",&n);
    for(i=1;i<=n*2-1;i++)
    {
        for(j=1;j<=n;j++)
        {
          if((j<=i)&&(j <=(n*2)-i))
          {
              printf("*");
          }
          else{

              printf(" ");
          }

        }
        printf("\n");
    }

}




