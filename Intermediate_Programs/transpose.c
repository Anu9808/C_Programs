#include<stdio.h>
#define SIZE 10
int main()
{
    int i,j,temp,r,c,cp=100;
    int a[SIZE][SIZE];
    printf("Enter the Row and Column limit");//Should be less than 10
    scanf("%d %d",&r,&c);
    printf("enter the matrix elements\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("The matrix is:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    /* for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            temp = a[i][j]+cp;
            a[i][j]=a[j][i];
            a[j][i] = temp-cp;

        }
    }*/
    printf("The transpose of matrix is:\n");
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("%d\t",a[j][i]);
        }
        printf("\n");
    }
return 0;

}
