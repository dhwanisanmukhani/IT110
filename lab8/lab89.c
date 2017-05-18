#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n=100;
	printf("Maximum character limit:");
	scanf("%d",&n);
	char *arr;
	arr=malloc(n*sizeof(char));
	scanf("%s",arr);
	printf("%s",arr);
	return 0;
}