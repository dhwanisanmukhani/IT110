#include <stdio.h>
int main()
{
	int game,i,j,k=1,c=0;
	printf("Enter a number: ");
	scanf("%d",&game);
	for(i=0;i<8;i++)
	{
		j=game&k;
		if(j!=0)
		{
			c=c+1;
			switch(i)
			{
				case 0:
				{
					printf("Cricket\n");
					break;
				}
				case 1:
				{
					printf("Basketball\n");
					break;
				}
				case 2:
				{
					printf("Football\n");
					break;
				}
				case 3:
				{
					printf("Hockey\n");
					break;
				}
				case 4:
				{
					printf("Lawn Tennis\n");
					break;
				}
				case 5:
				{
					printf("Table Tennis\n");
					break;
				}
				case 6:
				{
					printf("Carrom\n");
					break;
				}
				case 7:
				{
					printf("Chess\n");
					break;
				}	
			}
		}
		k=k<<1;
	}
	if(c>=5)
	{
		printf("This college won the champion of champions trophy\n");
	}
	else
	{
		printf("This college didn't win trophy\n");
	}
	return 0;
}