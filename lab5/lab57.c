#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
int sum=0;
int seed=0,n=1;
seed=time(NULL);
srand(seed);
while(n<3)
{	sum=sum+rand()%6+1;
	n++;
}
printf("%d",sum);
return 0;
}


