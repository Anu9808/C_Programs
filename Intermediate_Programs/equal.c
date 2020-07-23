#include<stdio.h>
void inc();
void quotes();
int main()
{
    int a,b,c;
    printf("enter the two values");
    scanf("%d %d",&a,&b);
    c = a^b;                //check equality with xor operator
    //printf("%d\n",c);
    if(c == 0)
        printf("Equal");
    else
        printf("Not  Equal");
    printf("\n");
    inc();
    quotes();
    return 0;
}
void inc ()
{
    int a=2,b;
    b= ++a*++a*++a;
    printf("%d\n",b);
}
void quotes()
{
    printf("\"Anurag Sharma\"");
}
