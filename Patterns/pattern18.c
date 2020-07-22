#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,n,m;

    printf("Enter the value of row");
    scanf("%d",&n);
     m= (n/2)+1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
          if((j==1 || j==n)||(i==1 || i ==n))
          {
              printf("* ");
          }

          else if(j==i || j==(n+1)-i){
             if(j==m && i==m)
              {
                  printf(" ");
                  printf(" ");
              }
              else{
                 printf("* ");
              }
          }
          else if((j>=m-1 && j<=m+1) && (i>=m-1 && i<=m+1))
            {
              if(j==m && i==m)
              {
                  printf(" ");
                  printf(" ");
              }
              else{
                 printf("* ");
              }
          }


          else{

              printf(" ");
              printf(" ");
          }

        }
        printf("\n");
    }

}


