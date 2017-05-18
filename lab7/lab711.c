#include <stdio.h>
#define MAX 100
int highest(int []);
int size;
int main()
{
	int arr[MAX],m,i;
	printf("Enter the size of array:" );
	scanf("%d",&size);
	
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	m=highest(arr);
	printf("Highest: %d\n",m);
	return 0;
}

int highest(int arr[])
{
	static int i=0,m=-999;
	if(i<size)
	{
		if(m<arr[i])
		{
			m=arr[i];
		}
		i++;
		highest(arr);
	}
	return m;
}