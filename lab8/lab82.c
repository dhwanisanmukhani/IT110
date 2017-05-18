#include <stdio.h>
int adds(char a[4][10]);
int main()
{
	int i;
	char s[4][10];
	for(i=0;i<4;i++)
	{
		scanf("%s",s[i]);
	}
	printf("%d\n",adds(s));
}

int adds(char a[4][10])
{
	int j,i,sum=0,num=0;
	for(i=0;i<4;i++)
	{
		for(j=0;a[i][j]!='\0';j++)
		{
			int k=a[i][j]-48;
			num=(num*10)+k;
		}
		sum=sum+num;
		num=0;
	}
	return sum;
}