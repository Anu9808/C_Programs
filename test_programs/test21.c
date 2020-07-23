#include<stdio.h>
void palin(int);
int main()
{
    int n;
    scanf("%d",&n);
    palin(n);
    return 0;
}
void palin(int n)
{
    int m,i,r,v=0;
    m=n;
    i=0;
    while(m>0)
    {
        if(i==0){
         r= m%1000;
         printf("%d\n",r);
        m=m/1000;}

      else
      {
          r= m%100;
         printf("%d\n",r);
        m=m/100;
      }

      i++;
    }
}

