#include<stdio.h>

main()
{
	FILE *f1,*f2;
	char c;
	f1= fopen("jinal2f1","r");
	f2= fopen("copy.txt","w");
	while((c=fgetc(f1))!=EOF)
	{
		if(c>=97 || c<=122)
			c=c-32;
		fputc(c,f2);
	}	
	fclose(f1);
	fclose(f2);
}
