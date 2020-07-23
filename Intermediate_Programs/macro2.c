#include<stdio.h>
#define COUNTRY India
int main()
{
    #ifdef COUNTRY
    printf("i love my india");
    #endif // COUNTRY
    #ifndef COUNTRY
    printf("no");
     #endif
}

