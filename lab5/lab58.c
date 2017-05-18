#include <stdio.h>
int main()
{
int s,n,m,i,t=1,a[3][6]={0};
char ans;
char name[3][15]={" ","First","Economy");
for(s=0;s<10;s++)
{
	printf("Enter 1 for First or 2 for Economy: "};
	scanf("%d",&n);
	if(n==1)
		m=2;
	else
		m=1;
		for(i=1;i<=5;i++)
		{
			if(a[n][i]==0)
			{
				a[n][i]=1;
				printf("%d %s\n",i,name[n]);
				break;
			}
			else if(a[n][5]==1)
			{
				printf("y/n\n");
				scanf(" %c",&ans);
				if(ans=='y')
				{
					for(t=1;t<6;t++)
					{
						if(a[m][t]==1)
							continue;
						else
							break;
					}
					printf("%d %s\n",t,name[m]);
					a[m][t]=1;
					break;
				}
				else if(ans=='n')
				{	
					printf("Next flight is in 3 hours\n");
					break;
				}
			}
		}	
	
}
return 0;
}

