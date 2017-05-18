#include<stdio.h>
#include <string.h>
int main()
{
int c,d,i;
char temp[100];
char s[5][100];
for(i=0;i<5;i++)
{
scanf("%[^\n]s",s[i]);
while(getchar()!='\n');
}
for(c=0;c<4;c++)
{
        for(i=0;i<4-c;i++)
        {
                if(strlen(s[i])>strlen(s[i+1]))
                {
                        strcpy(temp,s[i]);
                        strcpy(s[i],s[i+1]);
                        strcpy(s[i+1],temp);
                }
		else if(strlen(s[i])==strlen(s[i+1]))
		{
			if(strcmp(s[i],s[i+1])>0)
			{
				strcpy(temp,s[i]);
        	                strcpy(s[i],s[i+1]);
	                        strcpy(s[i+1],temp);

			}
		}
        }
}
for(i=0;i<5;i++)
{
printf("%s\n",s[i]);
}
return 0;
}


