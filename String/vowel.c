#include<stdio.h>
int main()
{
    int n;
    char c;
    printf("Enter character");
    scanf("%c",&c);
    n = c;
    printf("%d",n);
    if(n==65||n==69||n==73||n==79||n==85||n==97||n==101||n==105||n==111||n==117)
    {
        printf("\nvowel is here");
    }

    else{
        printf("no vowel");
    }
    return 0;
}
