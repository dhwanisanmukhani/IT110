#include <stdio.h>
int main()
{
int n,arr[7]={1,5,10,50,100,500,1000};
scanf("%d",&n);
int count[7]={0};
char ch[7]={'i','v','x','l','c','d','m'};
int i,j;
for(i=6;i>=0;i--)
{
	while(n>=arr[i])
	{
		n=n-arr[i];
		count[i]++;
	}
}
for(i=6;i>=0;i--)
{
	for(j=1;j<=count[i];j++)
	{
		printf("%c",ch[i]);
	}
}
printf("\n");
return 0;
}