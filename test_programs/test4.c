#include<stdio.h>
int main()
{
   /* int n1,n2,e=1;
   scanf("%d",&n1);
   scanf("%d",&n2);     //no. should be in sorted order
        do
            {
                if(n1!=n2){
                e++;}
                n1=n2;
                scanf("%d",&n2);
            }
            while(n2!=-1);
   printf("%d",e);*/


   int n1,n2,e=0;
   scanf("%d",&n1);
   if(n1==-1)
    printf("%d",0);
   else{
        scanf("%d",&n2);
        while(n2!=-1)
            {
                if(n1!=n2){
                e++;}
                scanf("%d",&n2);
            }
        if(e>0)
            printf("%d",1);
        else
            printf("%d",0);
}

    /*float f;
    f=2e-4;
    printf("%f",f);*/

 return 0;

}
