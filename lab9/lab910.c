#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	if(n==1)
	{
		printf("NO\n");
	}
	else
	{
		int count=0;
		while(n!=0)
		{
			count=count+(n&1);
			n=n>>1;
		}
		if(count==1)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
	return 0;
}