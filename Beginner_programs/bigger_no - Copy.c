//finding min or max without using comparision operator
#include<stdio.h>
#include<stdlib.h>
void four();
int main()
{
    int a=18,b=27;
    printf("max is %d\n",((a+b)+abs(a-b))/2);
    printf("min is %d",((a+b)-abs(a-b))/2);
    four();
return 0;
}
void four()
{
    int a=9;
    a=a>>1;     //equal divide by 2
    printf("\n%d",a);
    printf("Anurag");

}
