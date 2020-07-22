
#include<stdio.h>
int main()
{
    int r,c,n,k;
    printf("Enter the no of rows\n");
    scanf("%d",&n);

    for(r=1;r<=n;r++)
    {
        k=1;
        for(c=1;c<=2*n-1;c++)
        {

            if((c>=n-(r-1) && c<= n+(r-1)) && k)
            {
                printf("*");
                k=0;
            }

            else
            {
                printf(" ");
                k=1;
            }
        }


        printf("\n");
    }
    return 0;
}
