#include<stdio.h>
#include<math.h>
void arm(int);
int main()
{
    int n;
    printf("Enter the no.");
    scanf("%d",&n);
    arm(n);
    return 0;
}

 void arm(int n)
{
     int m,i;
     float l,r,v=0.0;
     m=n;
     printf("\nEnter the length of no.");
     scanf("\t%f",&l);
    while(m>0)
    {
        r= m%10;
        v= v+pow(r,l);
        //printf("\t%f",pow(r,l));
        m=m/10;
    }
    //printf("\n%f",v);
    if (v==n)
        printf("\n  Armstrong no.");
    else
        printf("\n  Not Armstrong no.");

}
