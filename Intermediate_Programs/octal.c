#include<math.h>
#include<stdio.h>
int oct(int);
int check(int);
int main()
{
    int long n;
    int s,a;
    printf("Enter the octal no.");
    scanf("%d",&n);
    a =check(n);
    if(a==1)
    {
        s =oct(n);
         printf("\nthe octal to decimal conversion is%d",s);
    }
    else{
        printf("\nNo. is not octal valid");
    }

    return 0;
}
int check(int n)
{
    int i,t,w=0;
    i=n;
    while(i>0)
    {
        t=i%10;
         if(t>7){
            w++;}
        i=i/10;

    }
       if(w==0){
                return 1;}
       else{
              return 0;}
}

 int oct(int n)
{
     int p,v=0,c=0;
     while(n>0)
    {

      p =n%10;
      v = v+(p*pow(8,c++));
      n= n/10;
    }
    return v;
}
