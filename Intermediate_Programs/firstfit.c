#include<stdio.h>
int main()
{
    int i,j,pro[10],blo[10],alloc[10];
    int bn,pn,flags[10];

    printf("Enter the no. of blocks");
    scanf("\t%d",&bn);
    printf("\nEnter the no. of processes");
    scanf("\t%d",&pn);

    printf("\nEnter the size of blocks\n");
    for(i=0;i<bn;i++)
    {
        alloc[i]=0;
        scanf("\t%d",&blo[i]);
    }

     printf("\nEnter the size of process\n");
    for(i=0;i<pn;i++)
    {
        flags[i]=0;
        scanf("\t%d",&pro[i]);
    }

    printf("\n First fit Algorithim");

    for(i=0;i<pn;i++)
    {
        for(j=0;j<bn;j++)
        {
            if(pro[i]<=blo[j] && (alloc[j]==0))
            {
                   alloc[j]=1;
                   flags[i]=1;
                    printf("\nprocess %d is allocated to %d",i,j);
                    break;
            }

        }
        if(flags[i]==0)
        {
             printf("\nprocess %d is not allocated" ,i);
        }

    }

    return 0;

}
