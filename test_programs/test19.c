#include<stdio.h>
#include<string.h>
typedef struct student{

    char name[128];
    int physics;
    int chemistry;
    int mathematics;
}st;

void sort_marks(st*,int);
int main()
{
    int n,i,c=0;

    scanf("%d",&n);
    if(n>=1 && n<=100){
        st details[n];
        st *result;

        for(i=0;i<n;i++)
        {
            scanf("%s",details[i].name);
            scanf("%d %d %d",&details[i].physics,&details[i].chemistry,&details[i].mathematics);
            if((details[i].physics < 0 || details[i].physics >100) || (details[i].chemistry < 0 || details[i].chemistry >100) || (details[i].mathematics < 0 || details[i].mathematics >100))
            {
                c=c+1;
                break;
            }
        }

       if(c == 0){
        sort_marks(details,n);}
    }

  return 0;
}

void sort_marks(st details[],int n)
{
    st p;
    int i,j,l;

    for(j=0;j<n;j++){
    for(i=0;i<(n-1);i++)
    {
        if(details[i].physics > details[i+1].physics )
        {
            p = (details[i]);
            (details[i])=(details[i+1]);
            (details[i+1])=p;
        }
        else if(details[i].physics == details[i+1].physics )
          {
                if(details[i].chemistry > details[i+1].chemistry )
                {
                    p = (details[i]);
                    (details[i])=(details[i+1]);
                    (details[i+1])=p;
                }
                else if(details[i].chemistry == details[i+1].chemistry )
                {
                    if(details[i].mathematics > details[i+1].mathematics )
                    {
                        p = (details[i]);
                        (details[i])=(details[i+1]);
                        (details[i+1])=p;
                    }
                 else if(details[i].mathematics == details[i+1].mathematics )
                    {
                        if(strcmp(details[j].name,details[j+1].name)>0)
                            {
                                p = (details[i]);
                                (details[i])=(details[i+1]);
                                (details[i+1])=p;
                            }
                    }
                }

          }

    }
}
        for(i=0;i<n;i++)
        {
           printf("%s-",details[i].name);

           printf("%d-%d-%d",details[i].physics,details[i].chemistry,details[i].mathematics);
           if(i<n-1)
            printf("\n");
        }

}
