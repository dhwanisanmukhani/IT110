#include <stdio.h>
int sortarr(int arr[],int n)
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
	return arr[1];
}
int main()
{
int arr[5],i,m;
for(i=0;i<5;i++)
{
	scanf("%d",&arr[i]);
}
m=sortarr(arr,5);
printf("%d\n",m);
return 0;
}
