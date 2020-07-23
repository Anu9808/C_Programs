#include<stdio.h>
#include<string.h>
int main()
{
    int i=0,l;
    char s[]="anurag sharma";
    l=strlen(s);
    s[6]='\0';
    puts(s);
    printf("%d",l);
    for(i=0;i<=l;i++)
        putchar(s[i]);

    return 0;
}
