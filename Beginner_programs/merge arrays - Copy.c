/*given two arrays and our tasks is to merge them.
Approach: an additional array of size double of (given array size) and
then transfer all elements into the new array.
after that sort the new array.
*/

#include<stdio.h>
int main()
{
 int i,j=0,k,c[10];
 int a[5]={22,34,56,78,90};
 int b[5]={23,65,13,45,90};
 for(i=0;i<10;i++)
 {
     if(i<5)
     {
         c[i]=a[i];
     }
     else
        {c[i]=b[j];
        j++;}
 }
 printf("\nThe merged array is");
 printf("\n");
 for(i=0;i<10;i++)
 {
   printf("%d\t",c[i]);
 }
 for(i=0;i<10;i++)
 {
   for(j=i+1;j<10;j++)
      {
          if(c[i]>c[j])
          {
              k =c[i];
              c[i]=c[j];
              c[j]=k;
          }

       }
 }
 printf("\nThe sorted merged array is");
 printf("\n");
 for(i=0;i<10;i++)
 {
   printf("%d\t",c[i]);
 }
 return 0;
}






