#include<stdio.h>
int main()
{
    int *d;
    int e=5;
    d=&e;
    char *c;
    printf("%u\t%d",d,*d);
     printf("\t%d",sizeof(e));
    printf("\t%d",sizeof(*d));
    printf("\t%d",sizeof(*c));
return 0;

}
