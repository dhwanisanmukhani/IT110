#include <stdio.h>

int addition(int a,int b)
{
	return a+b;
}
int main()
{
	int (*function)(int,int);
	function=&addition;
	int a,b,x,y;
	printf("Value for pointer to function: ");
	scanf("%d%d",&a,&b);
	printf("Value for direct call function: ");
	scanf("%d%d",&x,&y);
	int sum;
	sum=(*function)(a,b);
	printf("Pointer to function: %d\n",sum);
	printf("Direct call of function: %d\n",addition(x,y));
	return 0;
}