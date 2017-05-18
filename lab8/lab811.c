#include <stdio.h>

int addition(int a,int b)
{
	return a+b;
}

int substraction(int a,int b)
{
	if(a>b)
	{
		return a-b;
	}
	else
	{
		return b-a;
	}
}

int multiplication(int a,int b)
{
	return a*b;
}

int main()
{
	int n,a,b;
	int (*function_arr[3])(int ,int);
	function_arr[0]=&addition;
	function_arr[1]=&substraction;
	function_arr[2]=&multiplication;
	printf("0-Addition\n1-Substraction\n2-Multiplication\n");
	scanf("%d",&n);
	scanf("%d%d",&a,&b);
	printf("%d\n",(*function_arr[n])(a,b));
	return 0;
}