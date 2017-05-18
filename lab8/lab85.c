#include <stdio.h>
struct values
{
	int total;
	float per;
};
struct values v1;

void results(int arr[3]);
int main()
{
	int sub[3];
	int i;
	for(i=0;i<3;i++)
	{
		scanf("%d",&sub[i]);
	}
	results(sub);
	printf("%d\n%.2f\n",v1.total,v1.per);
	return 0;
}

void results(int arr[3])
{
	int i,sum=0;
	for(i=0;i<3;i++)
	{
		sum=sum+arr[i];
	}
	v1.total=sum;
	v1.per=v1.total/3;
}