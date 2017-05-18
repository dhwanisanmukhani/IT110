#include <stdio.h>
int main()
{
		int leap,days,rem,i,j,month,year;
		int t=1;
		int day[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
		char name[13][10]={" ","January","February","March","April","May","June","July","August","September","October","November","December"};
		printf("Enter month: ");
		scanf("%d",&month);
		printf("Enter year: ");
		scanf("%d",&year);
		leap=(year-1900)/4;
		days=(leap*2)+(year-1900-leap);
		if(year%4==0)
			day[2]=29;
		for(i=1;i<month;i++)
		{
			days=days+day[i];
		}
		rem=days%7;
		printf("\t\t%s %d\n\n",name[month],year);
		printf(" Mon\t Tue\t Wed\t Thu\t Fri\t Sat\t Sun\n");
		for(i=1;i<=7;i++)
		{
			if(i<rem)
				printf("   \t");
			else
				printf(" %d \t",t++);
		}
		printf("\n");
		for(i=1;i<=5;i++)
		{
			for(j=1;j<=7;j++)
			{
				if(t<=day[month])
					printf(" %d \t",t++);
				else
					break;
			}
			printf("\n");
		}
		return 0;
}

