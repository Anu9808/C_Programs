#include<stdio.h>
#define COUNTRY INDI
int main()
{
    #if COUNTRY == nepal
      printf("anuragsh");
    #elif COUNTRY == bangladesh
        printf("sharma");

    #elif COUNTRY==bhutan
        printf("fsfsdh");

    #else
        printf("anuragshrama");

    #endif
    return 0;
}
