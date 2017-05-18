#include<stdio.h>
#include<string.h>
main()
{
	FILE *f1;
	char c[20][50], temp[50];
	int i=0,j,k;
	f1 = fopen("jinal3f1","r");
	
		while(fgets(c[i],50,(FILE*)f1)>0)i++;
	
	 for(k=0;k<i;k++)
        {
              for(j=k+1;j<i;j++)
		{
			if(strcmp(c[k],c[j])>0)
			{
				strcpy(temp,c[k]);
				strcpy(c[k],c[j]);
				strcpy(c[j],temp);	
			}
		}
        }
	 for(k=0;k<i;k++)
        {
                printf("%s\n",c[k]);
        }
	fclose(f1);
}
