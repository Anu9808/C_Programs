#include<stdio.h>
int main()
{
    int r,sp,c,n,m;
    printf("Enter the no of rows\n");
    scanf("%d",&n);
    m=n/2+1;
    for(r=1;r<=(n/2)+1;r++)
    {
        for(sp=1;sp<m;sp++)
        {
            printf(" ");
        }
           m--;

        for(c=1;c<=r;c++)  // for(c=1;c<=2*r-1;c++)
        {
            printf("%d ",r);   // printf("%d",r);
        }
        printf("\n");
    }

    m=2;
     for(r=n/2;r>=1;r--)
    {
        for(sp=1;sp<m;sp++)
        {
            printf(" ");
        }
           m++;

        for(c=1;c<=r;c++)  // for(c=1;c<=2*r-1;c++)
        {
            printf("%d ",r);   // printf("%d",r);
        }
        printf("\n");
    }
    return 0;
}
