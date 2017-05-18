#include <stdio.h>
 
void swapping(int *a,int *b,int *c);

int main()
{
	int a,b,c,i;
	scanf("%d%d%d",&a,&b,&c);
	printf("Before Swapping\na=%d\nb=%d\nc=%d\n",a,b,c);
	swapping(&a,&b,&c);
	printf("After Swapping\na=%d\nb=%d\nc=%d\n",a,b,c);
	return 0;
}

void swapping(int *a,int *b,int *c)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=*c;
	*c=temp;
}