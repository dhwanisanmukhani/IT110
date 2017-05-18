#include<stdio.h>
#include<string.h>
main()
{
	FILE *f1,*f2;
	char c[20];
	char a='\0';
	int i=0,j;
	f1=fopen("jinal2f1","r");
	f2=fopen("jinal5f1.txt","w");
	while(fscanf(f1,"%s",c)>0)
	{      // fscanf(f1,"%s",c);
		if(strcmp(c,"a")==0 || strcmp(c,"the")==0 || strcmp(c,"an")==0)
		strcpy(c," ");
		fprintf(f2,"%s",c);
		fprintf(f2," ");
	}
	fclose(f1);
	fclose(f2);

}

