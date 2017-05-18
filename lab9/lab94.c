#include <stdio.h>
#include <string.h>
struct libraries
{
int num;
char title[50];
char author[50];
int price;
int flag;
};
int main()
{
struct libraries lib[10]={
			{1,"Ramayan","Valmiki",100,0},
			{2,"Fallen too far","Abbi",500,1},
			{3,"Captive","Erica",400,1},
		      };
int choice,ans=1,i=3,j;
while(ans)
{
	printf("Enter choice: ");
	scanf("%d",&choice);
	switch(choice)
	{
	case 1:
	{
		printf("Enter number price and flag\n");
		scanf("%d%d%d",&lib[i].num,&lib[i].price,&lib[i].flag);
		scanf("%s",lib[i].title);
		while(getchar()!='\n');
		scanf("%s",lib[i].author);
		while(getchar()!='\n');
		i++;
		break;
	}
	case 2:
	{
		char ch[50];
		scanf("%s",ch);
		for(j=0;j<i;j++)
		{
			if(strcmp(ch,lib[j].title)==0)
			{
				printf("%d %s %s %d %d\n",lib[j].num,lib[j].title,lib[j].author,lib[j].price,lib[j].flag);
			}
		}
		break;
	}
	case 3:
	{
		char n[50];
		scanf("%s",n);
		for(j=0;j<i;j++)
		{
    		if(strcmp(n,lib[j].author)==0)
    		{       
        		printf("%s",lib[j].title);
    		}
		}
		break;
	}	
	case 4:
	{
		int t;
		scanf("%d",&t);
		printf("%s\n",lib[t].title);
		break;
	}
	case 5:
	{
		printf("%d\n",i);
		break;
	}
	case 6:
	{
		int t;
		for(j=0;j<i;j++)
		{
			for(t=0;t<i-j-1;t++)
			{
				struct libraries m;
				if(lib[t].num>lib[t+1].num)
				{
					m=lib[t];
					lib[t]=lib[t+1];
					lib[t+1]=m;
				}
			}
		}
		for(j=0;j<i;j++)
		{
			printf("%d %s %s %d %d\n",lib[j].num,lib[j].title,lib[j].author,lib[j].price,lib[j].flag);
		}
	break;
	}
	case 7:
	{
		ans=0;
	break;
	}
	}
}
return 0;
}
 
