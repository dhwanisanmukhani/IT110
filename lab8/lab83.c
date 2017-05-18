#include <stdio.h>
#include <string.h>
void dict(char arr[5][20]);
int main()
{
	char s[5][20];
	int i;
	for(i=0;i<5;i++)
	{
		scanf("%s",s[i]);
		while(getchar()!='\n');
	}
	dict(s);
	for(i=0;i<5;i++)
	{
		printf("%s\n",s[i] );
	}
	return 0;
}

void dict(char arr[5][20])
{
	int i,j;
	char temp[20];
	for(i=0;i<5;i++)
	{
		for(j=0;j<5-i-1;j++)
		{
			if(strcmp(arr[j],arr[j+1])>0)
			{
				strcpy(temp,*(arr+j));
				strcpy(*(arr+j),*(arr+j+1));
				strcpy(*(arr+j+1),temp);
			}
		}
	}
}