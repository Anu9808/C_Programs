#include<stdio.h>
void value();
int main()
{
    unsigned int max=0;
    printf("%u",&max);
    printf("\n");
    max = ~max;
    printf("%u",max);
    value();
    return 0;
}
void value()
{
    printf("\n%u",printf("Anurag sharma"));
}
