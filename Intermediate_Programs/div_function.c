#include<stdio.h>
#include<stdlib.h>
int main()
{
    div_t res;
    res=div(21,5);
    printf("%d\n",res.quot);
    printf("%d",res.rem);
    return 0;
}
