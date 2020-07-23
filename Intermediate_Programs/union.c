#include<stdio.h>
typedef union student_t_distribution{
 int roll;
 char *name;
 int rank;
}St;
int main()
{
    St t;
    t.roll=51;
    printf("%d",t.roll);
    t.name="Anuarg Shrama";
    printf("%s",t.name);
    printf("\t%d",t.roll);
    t.rank=1;
     printf("\t%d",t.rank);
return 0;
}
