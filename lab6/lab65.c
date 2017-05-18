#include <stdio.h>
int main()
{
int i,j,k,sum;
for(i=1;i<=500;i++)
{
	for(j=1;j<=500;j++)
	{
		for(k=1;k<=500;k++)
		{
			sum=(k*k)+(j*j);
			if(sum==(i*i))
			{
				printf("%d %d %d\n",i,j,k);
			}
		}
	}
}
return 0;
}
