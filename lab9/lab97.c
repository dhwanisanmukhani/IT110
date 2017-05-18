#include <stdio.h>
int main()
{
	enum days
	{
		Sunday,Monday,Tuesday,Wednesday,Thursday,Friday,Saturday
	};
	enum days weekday;
	int x;
	scanf("%d",&x);
	weekday=x;
	if(weekday==Sunday||weekday==Saturday)
	{
		printf("Enjoy!\n");
	}
	else
	{
		printf("Do your work\n");
	}
	return 0;
}
