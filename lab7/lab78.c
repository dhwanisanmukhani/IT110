#include <stdio.h>
int main()
{
int i,len=0,a,j;
char s[50];
scanf("%s",s);
while(getchar()!='\n');

//strlen
for(i=0;s[i]!='\0';i++)         
{
	len++;
}
printf("Length %d\n",len);

//strcmp
printf("Enter second string: ");
char s2[50];
scanf("%s",s2);
while(getchar()!='\n');
for(i=0;s[i]!='\0';i++)     
{
        if(s[i]==s2[i])
	{
		a=0;
		continue;
	}
	else
	{
		a=1;
		printf("DIFFERENT\n");
		break;
	}
}
if(a==0)
	printf("SAME\n");

//concanate
char s3[100];
for(i=0;s[i]!='\0';i++)   
{
	s3[i]=s[i];
}
for(j=i;s2[j-i]!='\0';)
{
	s3[j++]=s2[j-i];
	s3[j]='\0';
}

//srtcpy
printf("%s\n",s3);
char s4[len];
for(i=0;i<len;i++)
{
	s4[i]=s[i];
}
printf("New string %s\n",s4);

//strrev
char s5[len];
for(i=0;i<len;i++)
{
	s5[i]=s[len-i-1];
}
printf("Reverse string %s\n",s5);
return 0;
}