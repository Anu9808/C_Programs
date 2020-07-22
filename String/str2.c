#include<stdio.h>
#define SIZE 10
int main()
{
    char str1[SIZE],str2[SIZE],str3[SIZE];
    printf("Enter the string\n");
    scanf("%s",str1);
    printf("\t%s",str1);
    printf("\nEnter the another string\n");
    scanf("%s",str2);
    printf("%s\t",str2);
    printf("\nEnter the  second another string\n");
    gets(str3);
    puts(str3);
    return 0;
}
