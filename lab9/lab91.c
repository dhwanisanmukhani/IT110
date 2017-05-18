#include<stdio.h>
struct dates
{
	int month;
	int date;
	int year;
};
int main()
{
struct dates d1,d2;
scanf("%d/%d/%d",&d1.date,&d1.month,&d1.year);
scanf("%d/%d/%d",&d2.date,&d2.month,&d2.year);
if(d1.date==d2.date && d1.month==d2.month && d1.year==d2.year)
printf("Equal");
else
printf("Unequal");
return 0;
}

