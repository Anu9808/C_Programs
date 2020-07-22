#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,n,m;

    printf("enter the value of row");
    scanf("%d",&n);
    m=(n/2)+1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i<=m)
                 {

                  if(j <i)
                  {
                     printf(" %d ",j);
                  }
                  else if(j >(n-i)){

                     printf(" %d ",((n+1)-j));
                  }
                  else{

                       printf(" %d ",i);}
        }

        else{

                  if(j <=(n-i))
                  {
                     printf(" %d ",j);
                  }
                  else if(j >(i)){

                     printf(" %d ",((n+1)-j));
                  }
                  else{

                       printf(" %d ",((n+1)-i));}



        }
        }
        printf("\n");

    }


}






