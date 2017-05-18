#include<stdio.h>

main()
{
	FILE *f1,*f2;
	char c;
	f1=fopen("jinal1f1","r");
	f2=fopen("jinal2f1","a");
	while((c=getc(f1))!=EOF)
		putc(c,f2);
	fclose(f1);
	fclose(f2);
}
