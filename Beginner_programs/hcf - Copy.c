#include<stdio.h>
int gcd(int,int);
int main()
{
    int m,n,l,s;
    printf("Enter two no.");
    scanf("%d\t%d",&m,&n);
    l = gcd(m,n);
    s =((m*n)/l);
    printf("G.C.D is =%d\tL.C.M is =%d",l,s);
    return 0;
}
int gcd(int m,int n)
{   int d,a,b;
    a=m;b=n;
    while(b>0)
        {

        if(a%b==0)
            {
                return b;
            }

        else
            {
                d=a-b;
                a=((d>b)?d:b);
                b=((d<b)?d:b);

            }
        }

}
