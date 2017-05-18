#include<stdio.h>
#include <string.h>
int main()
{
char s[1000];
int i,count=0;
scanf("%[^\n]s",s);
for(i=0;i<strlen(s)-1;i++)
{
	if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
	{
		if(s[i+1]=='a'||s[i+1]=='e'||s[i+1]=='i'||s[i+1]=='o'||s[i+1]=='u'||s[i+1]=='A'||s[i+1]=='E'||s[i+1]=='I'||s[i+1]=='0'||s[i+1]=='U')
		{
			count++;
		}
	}
}
printf("%d",count);
return 0;
}
