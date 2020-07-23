#include<stdio.h>
int main()
{   //char s[90];
    char ch;
    printf("enter the char");
    ch=getchar();
    while(ch!= EOF)
    {  printf("%c",ch);
       ch=getchar();
    }
return 0;
}
