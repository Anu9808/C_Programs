#include<stdio.h>
#include<string.h>
 int longest(char[]);
 void main()
 {
   char a[100];
   int count =0;
   scanf("%s",a);

   count =longest(a);
   printf("%d",count);
 }

int longest(char a[])
{
  int c=0,n=1,max=1;
  for(c;c<strlen(a);c++)
  {
    if(a[c] == a[c+1])
    {n=n+1;
    }
    else
    {
      if(n>max)
      {max=n;
      }
      n=1;
    }
  }
    return max;
 }
