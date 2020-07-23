#include<stdio.h>
int main()
{
    int i,j,n,a;
    int f1=1,f2=1,f3=1;
    printf("Enter the size of matrix\n");
    scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&a);
                /*if((i==j)&&(a==0))
                     f1=0;*/
                if((i>j)&&(a!=0))
                         f2=0;
                else if((i<j)&&(a!=0))
                         f3=0;
            }
        }
    if(((f3==1)||(f2==1)))
        printf("yes");
    else
        printf("no");
return 0;
}
