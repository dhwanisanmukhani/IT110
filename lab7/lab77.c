#include <stdio.h>
#define MAX 6
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

int sum(int n)
{
	int i,sum=0;
	for(i=0;i<n;i++)
	{
		sum=sum+arr[i];
	}
	return sum;
}

int rev(int n)
{
	int i,swap;
	for(i=0;i<n/2;i++)
	{
		swap=arr[i];
		arr[i]=arr[n-i-1];
		arr[n-i-1]=swap;
	}
}

int search(int n,int num)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(arr[i]==num)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int i,choice;
	for(i=0;i<6;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter\t1:Sorting\n\t2:Sum\n\t3:Reverse\n\t4:Search\n\t5:Exit\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
		{
			sortarr(6);
			for(i=0;i<6;i++)
			{
				printf("%d ",arr[i]);
			}
			printf("\n");
			break;
		}
		case 2:
		{
			printf("%d\n",sum(6));
			break;
		}
		case 3:
		{	
			rev(6);
			for(i=0;i<6;i++)
			{
				printf("%d ",arr[i]);
			}
			printf("\n");
			break;
		}
		case 4:
		{
			int num;
			printf("Enter the number to search: ");
			scanf("%d",&num);
			if(search(6,num)==0)
			{
				printf("It is there \n");
			}
			else
			{
				printf("It is not there\n");
			}
		}
		default:
		{
			return 0;
		}
	}
	return 0;
}
