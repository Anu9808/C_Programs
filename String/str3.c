#include<stdio.h>
#include<string.h>
int main()
{
    char source[10],target[20],extra[20];
    int i,m,n;
    printf("1 for get length");
    printf("\n2 for string copy");
    printf("\n3 for string concatenation");
    printf("\n4 for string compare");
    printf("\nEnter the string\t");
    scanf("%s",source);
    printf("\nEnter the another string\t");
    scanf("%s",target);
    printf("%s",source);
    printf("\n");
    printf("%s",target);
    printf("\nEnter the choice");
    scanf("%d",&i);

    switch(i)
    {
        case 1: m=strlen(source);
                n=strlen(target);
                printf("\n%d\t%d",m,n);
                break;


        case 2:   strcpy(extra,source);
                  printf("\tExtra string is%s",extra);
                  break;

        default: printf("no operation");


    }

    return 0;

}
