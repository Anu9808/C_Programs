#include<stdio.h>
int main(int argc,char* argv[])
{
    int c=5;
    printf("number of command line arguments passed:%d\n ",argc);
    for(c=0;c<argc;c++)
    {
        printf("%d arguments is %s\n",c+1,argv[c]);
    }
    return 0;
}
