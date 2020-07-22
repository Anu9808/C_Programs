#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    int i,j,n;
    char name[20];
    printf("Enter the name");
    gets(name);
    n = strlen(name);

    for(i=1;i<=n*2-1;i++)
    {

        for(j=1;j<=n;j++)
        {
          if((j<=i)&&(j <=(n*2)-i))
          {
              printf("%c",name[j-1]);


          }
          else{

              printf(" ");
          }

        }
        printf("\n");
    }

}





