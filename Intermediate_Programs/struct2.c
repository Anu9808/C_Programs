#include<stdio.h>
#include<string.h>
typedef struct student{

int roll_no;
char name[20];
float rank;

}st;

int main()
{
  st s1,s3;
  st s2[3];
  s1 = (st){1,"Anurag",1.0};
 printf(" Roll_no is%d \t Name: %s \t Rank: %3.1f",s1.roll_no,s1.name,s1.rank);
  s2[0]=(st){2,"anuragsh",2.0};
   printf(" Roll_no is%d \t Name: %s \t Rank: %3.1f",s2[0].roll_no,s2[0].name,s2[0].rank);
  strcpy(s2[1].name,"anurag");
  printf("%s",s2[1].name);
  strcpy(s3.name,"anuragsharma");
  printf("%s",s3.name);

  s2[2].rank=3.0;
  printf("%f",s2[2].rank);
 return 0;
}
