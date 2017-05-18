#include <stdio.h>
int main()
{
int mon,date,year;
scanf("%d/%d/%d",&mon,&date,&year);
switch(mon)
{
case 1:
	printf("Jan",mon);
	break;
case 2:
        printf("Feb",mon);
	break;

case 3:
        printf("March",mon);break;

case 4:
        printf("May",mon);break;

case 5:
        printf("April",mon);break;

case 6:
        printf("June",mon);break;

case 7:
        printf("July",mon);break;

case 8:
        printf("August",mon);break;

case 9:
        printf("Sep",mon);break;

case 10:
        printf("Oct",mon);break;

case 11:
        printf("Nov",mon);break;

case 12:
        printf("Dec",mon);break;

}
printf("%d,%d",date,year);
return 0;
}
