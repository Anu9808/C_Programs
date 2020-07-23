#include<stdio.h>
int main()
{
    int n1,n2,i,t,flag2=0,flag1=0,k=0;
    int a[20],b[20];
    scanf("%d",&n1);
    for(i=0;i<n1;i++)
        scanf("%d",&a[i]);

    scanf("%d",&n2);
    for(i=0;i<n2;i++)
        scanf("%d",&b[i]);
  flag1 = 0;
  while(flag1 != 1)
  {
    t=a[k];
    for(i=k;i<n1;i++)
    {
        if(t>a[i])
        {
            t=a[i];
        }
    }

     for(i=0;i<n2;i++)
     {
        if(t==b[i])
        {
            flag2=1;
        }
     }
     if(flag2 == 0){
        flag1=1;
        printf("%d",t);}
     else if(k == n1-1){
            printf("NO");
            break;}
     else
        k++;
  }

return 0;

}
