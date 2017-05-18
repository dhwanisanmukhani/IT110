#include <stdio.h>
int main()
{
	union a
	{
		char ch;
		int n;
		short i;
		long l;
	}num;
	scanf("%d",&num.n);
	printf("%d\n",num.n);
	scanf("%c",&num.ch);
	printf("%c\n",num.ch);
	scanf("%ld",&num.l);
	printf("%ld\n",num.l);
	scanf("%u",&num.i);
	printf("%u",num.i);
	/*printf("%d\n",num.n);
	printf("%c\n",num.ch);
	printf("%ld\n",num.l);*/
	return 0;
}