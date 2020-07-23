//assignment 4
#include<stdio.h>
#define MAX 20
int read_array(int arr[])
{
int i, n;
scanf("%d", &n);
for (i = 0; i < n; i++)
scanf("%d", &arr[i]);
return n;
}
int present(int arr[], int n, int elt) {
int i;
for (i = 0; i < n; i++) {
if (arr[i] == elt) {
    return 1;
}
}
return 0;
}
int main() {
int arr1[MAX], n1;
int arr2[MAX], n2;
n1 = read_array(arr1);
n2 = read_array(arr2);
int i, small_np = 0, flag = 0;
for (i = 0; i < n1; i++) {
if (!present(arr2, n2, arr1[i])) {
if (!flag || (small_np > arr1[i]) ) {
flag = 1;
small_np = arr1[i];
}
}
}
if (flag) {
        printf("%d", small_np);
} else {
printf("NO");
}
return 0;
}
