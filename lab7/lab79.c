#include <stdio.h>
int floorfn(float n)
{
	int y=n;
	if((n-y)>=0.5)
		return y+1;
	else
		return y;
}
int main()
{
	float n;
	scanf("%f",&n);
	printf("%d\n",floorfn(n));
	return 0;
}