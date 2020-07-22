#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define SIZE 10

void sort(char*,int);
int anagram(char*,char*,int);
int main()
{
   char s1[SIZE],s2[SIZE];
   int n,flag,l1,l2;
   printf("Enter the first string\n");
   gets(s1);
   printf("\nEnter the another string\n");
   gets(s2);
   l1=strlen(s1);
   l2=strlen(s2);
   if(l1!=l2){
    printf("Not Anagram");
    exit(1);}
    n=l1;
   sort(s1,n);
   sort(s2,n);
   //puts(s1);
   //puts(s2);
   flag=anagram(s1,s2,n);
   if(flag!=0)
    printf("\n Anagram strings\n");
   else
    printf("Not Anagram Strings");
   return 0;
}
void sort(char* s,int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(s[i]>s[j])
            {
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
    }
}
int anagram(char*s1,char*s2,int n)
{
    int k;
    for(k=0;k<n;k++)
    {
       if(s1[k]!=s2[k])
          return 0;
    }
    return 1;
}
