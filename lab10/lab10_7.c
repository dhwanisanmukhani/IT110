#include <stdio.h>
#include <string.h>
int main()
{
	FILE *p; 
    char ch; 
    int w=1; 
    int n=0,j;
    char word[750][10];
    p=fopen("source.txt","r"); 
    if(p==NULL) 
    { 
        printf("file not found"); 
    } 
    else 
    { 
            ch=fgetc(p); 
            while(ch!=EOF) 
                {
                    if(ch==' '||ch=='\n') 
                    { 
                        w++;
                        n=0; 
                        continue;
                    }
                    else if(ch==','||ch=='.')
                    {
                    	continue;
                    }
                    word[w][n]=ch;
                    word[w][n++]='\0';
                    ch=fgetc(p); 
                }
                printf("\nWords in a file are=%d",w); 
    		for(j=0;j<w;j++)
    		{
    			if(strlen(word[j])==4)
    			{
    				printf("%s",word[j]);
    			}
    		}
    } 
    fclose(p);
}