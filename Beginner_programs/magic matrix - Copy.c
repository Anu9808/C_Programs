#include<stdio.h>
int main()
{
    int i,j;
    int a[3][3];
    printf("Enter the square matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d\t",&a[i][j]);
        }
        printf("\n");
    }
    printf("The square matrix is\n");
     for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

   return 0;
}
