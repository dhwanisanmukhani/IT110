#include <stdio.h>
#define MAX 5
int arr[MAX];
void sortarr(int n)
{
	int i,j,swap;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				swap=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=swap;
			}
		}
	}
}
int main()
{
	int i;
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	sortarr(5);
	for(i=0;i<5;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	return 0;
}