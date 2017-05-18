#include <stdio.h>
void main(int n)
{
	printf("%d\n",n);
	n++;
	main(n);
}