#include<stdio.h>
void sort(int*,int);
int main()
{
    int pn,bn,i,j;
    int p[10],b[10],pro[10],blo[10];


    printf("Enter the no. of blocks\t");
    scanf("\t%d",&bn);
    printf("\nEnter the no. of processes\t");
    scanf("\t%d",&pn);

    printf("\nEnter the size of blocks\n");
    for(i=0;i<bn;i++)
    {
        blo[i]=0;
        scanf("\t%d",&b[i]);
    }

     printf("\nEnter the size of process\n");
    for(i=0;i<pn;i++)
    {
        pro[i]=0;
        scanf("\t%d",&p[i]);
    }

     sort(b,bn);
     sort(p,pn);


     printf("\n \tProcess\t");
     printf("\n");

     for(i=0;i<pn;i++)
     {
         printf("%d\t",p[i]);
     }

      printf("\n \tBlock\t");
      printf("\n");

     for(i=0;i<bn;i++)
     {
         printf("%d\t",b[i]);

     }

     for(i=0;i<pn;i++)
     {
         for(j=0;j<bn;j++)
         {
             if(blo[j]==0 && p[i]<=b[j])
             {
                blo[j]=1;
                pro[i]=1;
                 printf("\nprocess %d is allocated to %d",i+1,j+1);
                break;
             }
         }

         if(pro[i]==0)
        {
             printf("\nprocess %d is not allocated" ,i);
        }
     }
     return 0;
}

void sort(int* x,int y)
{
    int i,j,temp;

    for(i=0;i<y;i++)
    {
        for(j=0;j<y-1;j++)
        {
            if(x[j]>x[j+1])
            {
                temp=x[j];
                x[j]=x[j+1];
                x[j+1]=temp;
            }
        }
    }
}
