#include<stdio.h>
int main()
{
    char name[]={'a','n','u','r','a','g','s','\0'};
    char sur[]= "Sharma";
    int i;
    char*ptr;
    char up[]="topper";
    char fame[10];

    printf("Enter the string\n");
    for(i=0;i<7;i++)
    {
        scanf("%c",&fame[i]);
    }
    for(i=0;i<7;i++)
    {
        printf("%c",fame[i]);
    }

     printf("\nnow\n");
     ptr=up;
    while(*ptr!='\0')
    {
        printf("%c",*ptr);
        ptr++;
    }
    printf("\n");

for(i=0;i<6;i++)
    {
       printf("%c",sur[i]);
    }

    printf("\n");
for(i=0;i<7;i++)
    {
       printf("%c",name[i]);
    }
    printf("\n");

puts(name);
puts(sur);

}
