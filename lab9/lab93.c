#include <stdio.h>
struct date
{
	int year,date,month;
};
struct employee
{
	int num;
	char name[50];
	struct date d;
};	
	
int main()
{
int i;
struct employee e[3];
for(i=0;i<3;i++)
{
	scanf("%d%s%d/%d/%d",&e[i].num,e[i].name,&e[i].d.date,&e[i].d.month,&e[i].d.year);
}
struct date d2;
scanf("%d/%d/%d",&d2.date,&d2.month,&d2.year);
int count=0;
for(i=0;i<3;i++)
{
	if(d2.year-e[i].d.year>3)
		count++;
	else if(d2.year-e[i].d.year==3)
	{
		if(d2.month>=e[i].d.month)
			count++;
	}
}
printf("%d\n",count);
return 0;
}


