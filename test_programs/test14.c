#include<stdio.h>
#include<string.h>
void sort(char*,int);
int anagram(char*,char*);
int main()
{
   char s1[100],s2[100];
   int n,result;
   gets(s1);
   scanf("%s",s1);;
   result = anagram(s1,s2);
   printf("%d",result);
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
int anagram(char*s1,char*s2)
{
    int k,count=0,n;
    n=strlen(s1);
    for(k=0;k<n;k++)
    {
        if(s1[k]==s2[k])
          count++;
    }
    sort(s1,n);
    sort(s2,n);
    for(k=0;k<n;k++)
    {
       if(s1[k]!=s2[k])
          return -1;
    }
    return count;
}

