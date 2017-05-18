#include<stdio.h>
#define MAX_WORD_LEN 20
#define MAX_WORDS 100
#define MAX_LINE_LEN 1000
char words[MAX_WORDS][MAX_WORD_LEN];
int freq[MAX_WORDS];
int n,lines,w;
int main()
{
	int j,i;
	n=0,lines=0,w=0;
	char c;
	while(1)
	{
		if(lines==3)break;
		scanf("%c",&c);
		if(c==' ')
		{
			n++;
			w=0;
		}
		else if(c=='\n')
		{
			n++;
			lines++;
			w=0;
		}
		else{
			words[n][w++]=c;
			words[n][w]='\0';
		}
	}
	for(i=0;i<n;i++)
	{
		if(freq[i]==-1) continue;
		freq[i]=1;
		for(j=i+1;j<n;j++)
		{
			if(strcmp(words[i] ,words[j])==0){
				freq[i]++;
				freq[j]=-1;
			}
		}
	}
	for(i=0;i<n;i++){
		if(freq[i]>0){
			printf("%s %d\n",words[i],freq[i]);
		}
	}
	return 0;
}
