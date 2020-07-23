#include<stdio.h>
int check(int*,int);
int main()
{
    int m,n,t,i,k,j;
    int s[100];
    scanf("%d",&m);
    scanf("%d",&n);
    s[0]=m;
    j=0;
    for(i=1;i<n-1;i++)
    {
        t = ((2*s[i-1])%n);
        s[i] = t;
        k = check(s,i);
        if(k==0){
            break;
        }

        else{
           j++;
        }
    }

    for(i=0;i<=j;i++)
    {
        printf("%d",s[i]);
        printf("\t");
    }

 return 0;
}

int check(int *s,int c)
{
    int j,t,l=0;
    t=s[c];
    for(j=c-1;j>=0;j--)
    {
        if(t==s[j]){
                return 0;
         }
    }
}
