#include<stdio.h>
#include<string.h>
main()
{
	FILE *f1, *f2;
	char ch[10],c[100];
	int l,i=0,j;
	char a[10];
	f1=fopen("INPUT.TXT","r");
	//while((fgets(c,80,(FILE*)f1))>0);
	while((fscanf(f1,"%s",ch))>0)
	{ 
		l=strlen(ch);
		//printf("%d\n",l);
				for(i=0,j=l-1;j>=0;i++,j--)
				{
					a[i]=ch[j];
					a[i+1]='\0';								}												printf("%s",a);											printf(" ");																}
	fclose(f1);
}	
