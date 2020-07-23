#include <stdio.h>
#include <limits.h>
int collatz_repeat(int n)
 {

    if ( n == 1 )
    {
      return 1;
    }

    else if ( n % 2 == 1 )
    {

      return 1 + collatz_repeat(3*n+1);

    }
    else
    {
        return 0 + collatz_repeat(n/2);
    }
}

int main()
{
int n,i=0,c;
scanf("%d",&n);
if(n%2 == 0)
{
  c = collatz_repeat(n);
}

if(n%2 == 1)
{
  c = collatz_repeat(n);
}
 printf("%d",c);
return 0;

}

