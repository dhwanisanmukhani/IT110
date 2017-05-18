#include <stdio.h>
void mularr(int *arr);
int main()
{
	int i,arr[10];
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	mularr(arr);
	for(i=0;i<10;i++)
	{
		printf("%d\n",arr[i]);
	}
	return 0;
}
void mularr(int *arr)
{
	int i;
	for(i=0;i<10;i++)
	{
		*(arr+i)=3*(*(arr+i));
	}
}
