#include<stdio.h>
#include<stdlib.h>
void sort(int arr[],int n)
{
   int i,j,temp;
    int m=n;
    for(i=0;i<m;i++)
    {
        for(j=0;j<m-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
               temp=arr[j];
               arr[j]=arr[j+1];
               arr[j+1]=temp;
            }
        }
    }
}

int mostFrequent(int arr[], int n)
{
    int max_count = 0, res = arr[0], curr_count = 1,i;
	// Sort the array
	sort(arr,n);


	for ( i = 1; i <n; i++) {
		if (arr[i] == arr[i - 1])
			curr_count++;
		else {
			if (curr_count > max_count) {
				max_count = curr_count;
				res = arr[i - 1];
			}
			curr_count = 1;
		}
	}
	if (curr_count > max_count)
	{
		max_count = curr_count;
		res = arr[n - 1];}

	return res;
}

// driver program
int main()
{
    int i,j,n;
    int arr[100];
    scanf("%d",&i);
    j=0;
    while(i != -1)
    {

        arr[j++]=i;

        scanf("%d",&i);
    }
    n=j;
	printf("%d" ,mostFrequent(arr, n));
	return 0;
}

