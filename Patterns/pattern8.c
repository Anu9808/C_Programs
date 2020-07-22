#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,n;
    int c,k;
    printf("enter the value of row");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        c= 65;
        k=0;
        for(j=1;j<=2*n-1;j++)
        {
          if((j <=(n+1)-i)||(j >=(n-1)+i))
          {
             if(j <n)
             {
                printf("%c",c+k);
                k++;
             }
             else if(j ==n)
                {
                  printf("%c",c+k);
                }

             else{
                    k--;
                 printf("%c",(c+k));
                }
          }
          else{

              printf(" ");
          }

        }
        printf("\n");
    }

}




