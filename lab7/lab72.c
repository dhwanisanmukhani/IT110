#include <stdio.h>
//bool is_prime(int);
int  is_prime(int n)
{
	int i;
	if(n%2==0&&n!=2)
		return 0;
	else if(n==1||n==0)
		return 0;
	else
	{
		for(i=3;i*i<n;i++)
		{
			if(n%i==0)
				return 0;
		}
	} 
	return 1;
}	

int main()
{
int n,i,j,num;
int arr[100]={0};
int t=0;
scanf("%d",&n);
for(i=2;i<n;i++)
{
	if(n%i==0)
	{
		arr[t++]=i;
		//printf("%d\n",arr[t-1]);
	}
}

for(i=0;arr[i]!=0;i++)
{
	num=n;
	if(is_prime(arr[i])==1)
	{
		for(j=1;num%arr[i]==0;j++)
		{
			num=num/arr[i];
			printf("%d\n",arr[i]);
		}
	}
}
return 0;
}

