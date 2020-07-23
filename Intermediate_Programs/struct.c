#include<stdio.h>
typedef struct student{
int roll;
char *name;
int rank;

}ST;
int main()
{
    ST t;
    t.roll = 51;
    t.name="Anurag Sharma";
    t.rank=1;
    printf("%d\t%s\t%d",t.roll,t.name,t.rank);
return 0;
}
