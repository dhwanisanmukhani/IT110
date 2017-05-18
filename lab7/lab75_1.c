#include <stdio.h>
int sum=0;
int digit(int n)
{
	sum=sum+n%10;
	n=n/10;
	if(n==0)
		return sum;
	digit(n);
}
int main()
{
int n;
scanf("%d",&n);
int s;
s=digit(n);
printf("%d\n",s);
return 0;
}
