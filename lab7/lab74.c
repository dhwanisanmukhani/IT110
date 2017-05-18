#include <stdio.h>
int  median(int arr[],int n)
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
float per(int arr[],int n)
{
	int i;
	float sum=0;
	for(i=0;i<n;i++)
	{
		sum=sum+arr[i];
	}
	return sum/3;
}
int main()
{
int arr[3],i;
for(i=0;i<3;i++)
{
	scanf("%d",&arr[i]);
}
int me=median(arr,3);
float pe=per(arr,3);
printf("%d\n",me);
printf("%f\n",pe);
return 0;
}

