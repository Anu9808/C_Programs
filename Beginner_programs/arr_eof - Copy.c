/* Demonstration of EOF(ctrl+z) feature in c; It can be used as
condition for terminating the input stream.
Here we are getting series of characters and printing them in reverse manner.
*/
#include<stdio.h>
int main()
{
     int a[50],i,t,ch;
     printf("enter the array elements");
     i=0;
     ch=getchar();
     while((i < 50)&&(ch != EOF))   //terminating condition
     {
          a[i]=ch;
          i++;
          ch=getchar();
     }

     t=i-1;
     while(t>=0)
     {
        putchar(a[t]);
         t--;
     }
return 0;
}
