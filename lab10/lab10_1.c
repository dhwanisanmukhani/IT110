#include<stdio.h>

main()
{
	int i=1;
	FILE *f1;
	char c;
	f1=fopen("jinal1f1","r");
	printf("1:");
	while((c=getc(f1))!=EOF)
	{
		printf("%c",c);
		if(c=='\n')
		{	
			i++;
			printf("%d:",i);
		}
	}
	fclose(f1);
}
