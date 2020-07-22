#include<stdio.h>
int main()
{
  int i,a,b,c;
  printf("1 for addition");
  printf("\n2 for subtraction");
  printf("\n3 for multiplication");
  printf("\n4 for division");
  printf("\n5 for exit");
  printf("\nEnter the two values");
  scanf("\n%d\t%d",&a,&b);
  do{
        printf("\nEnter the choice");
        scanf("\t%d",&i);

        switch(i)
            {
                case 1: c=a+b;
                        printf("%d",c);
                        break;
                case 2: c=a-b;
                        printf("%d",c);
                        break;
                case 3: c=a*b;
                        printf("%d",c);
                        break;
                case 4: c=a/b;
                        printf("%d",c);
                        break;
                case 5:
                        printf("For exit");
                        break;
                default:
                        printf("Out of the section of choice :No operation");
            }
  }
            while(i!=5);
 return 0;
}
