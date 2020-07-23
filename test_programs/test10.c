#include<stdio.h>
#include<string.h>
int main()
{
    char s[100],t;
    int n,i,m,k,j,l,c=0;
    int b[100];
    scanf("%s",s);
    n=strlen(s);
    t=s[0];
    for(l=0,i=1;i<n;i++)
    {
        if(s[i]==t){
            b[l]=i;
            l++;}
    }

    m=b[0];
    i=0;
    k=1;
    while(m>0)
    {
       if(s[i+k] == s[b[i]+k] && s[i+k] == s[b[i+1]+k] && s[b[i]+k]==s[b[i+1]+k] )
          c++;
          m--;
    }

    for(i=0;i<c;i++)
    {
       printf("%c",s[i]);
    }

return 0;
}
