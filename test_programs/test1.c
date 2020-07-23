#include<stdio.h>
int main()
{
   int a,b,c;
   scanf("%d\t%d\t%d",&a,&b,&c);
   if(a!=b&&b!=c&&c!=a)
   {
         printf("%d",1);
    }

   else
   {
      printf("%d",0);
   }
  return 0;
}
