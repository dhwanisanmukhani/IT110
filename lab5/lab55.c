#include <stdio.h>
#include <string.h>
int main()
{
char s[5][100];
int i,j;
for(i=0;i<5;i++)
{
scanf("%s",s[i]);
while(getchar()!='\n');
}
for(i=0;i<5;i++)
{
	for(j=strlen(s[i])-1;j>=0;j--)
	{
		printf("%c",s[i][j]);
	}
	printf("\n");
}
return 0;
}
