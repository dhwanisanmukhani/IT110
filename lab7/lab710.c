#include <stdio.h>
int is_perfect(int n)
{
	int i,sum=0;
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
	}
	if(sum==n)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
int main()
{
	int n,status;
	scanf("%d",&n);
	status=is_perfect(n);
	if(status==0)
	{
		printf("Yes\n");
	}
	else
	{
		printf("No\n");
	}
	return 0;
}