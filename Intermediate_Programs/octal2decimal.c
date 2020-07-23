#include<math.h>
#include<stdio.h>
int oct(int);
int main()
{
    int n,s;
    printf("Enter the octal no.");
    scanf("%d",&n);
    s =oct(n);
    printf("\nThe decimal conversion is%d",s);
    return 0;
}
 int oct(int n)
{
     int p,v=0,c=0;
     while(n>0)
    {

      p =n%10;
      v = v+(p*pow(8,c++));
      n= n/10;
    }
    return v;
}
