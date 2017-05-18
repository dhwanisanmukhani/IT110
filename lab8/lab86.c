#include <stdio.h>
void matr(int m1[5][4],int m2[4][6],int m3[5][6]);
int main()
{
	int i,j,m1[5][4],m2[4][6],m3[5][6]={0};
	for(i=0;i<5;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",&m1[i][j]);
		}
	}
	for(i=0;i<4;i++)
	{
		for(j=0;j<6;j++)
		{
			scanf("%d",&m2[i][j]);
		}
	}
	matr(m1,m2,m3);
	for(i=0;i<5;i++)
	{
		for(j=0;j<6;j++)
		{
			printf("%d\t",m3[i][j]);
		}
		printf("\n");
	}
	return 0;
}

void matr(int m1[5][4],int m2[4][6],int m3[5][6])
{
	int i,j,k;
	for(i=0;i<5;i++)
	{
		for(j=0;j<6;j++)
		{
			for(k=0;k<4;k++)
			{
				*(*(m3+i)+j)+=(*(*(m1+i)+k))*(*(*(m2+k)+j));	
			}
		}
	}
}