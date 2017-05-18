#include <stdio.h>
int main()
{
float beg,total,charges,credits,limit;
int accno;
while(1)
{
	printf("Enter Account number(-1 to end): ");
	scanf("%d",&accno);
	if(accno==-1)
		break;
	else
	{
		printf("Enter beginning balance: ");
		scanf("%f",&beg);
		printf("Enter total charges: ");
		scanf("%f",&charges);
		printf("Enter total credits: ");
		scanf("%f",&credits);
		printf("Enter credit limit: ");
		scanf("%f",&limit);
		total=beg+charges-credits;
		printf("Account: %d\n",accno);
		printf("Credit limit: %f\n",limit);
		printf("Balance: %.2f\n",total);
		if(total>limit)
			printf("Credit limit exceeded\n");
		else 
			continue;
	}
}
return 0;
}


