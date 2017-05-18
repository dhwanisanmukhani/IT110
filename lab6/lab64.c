//7.4 1.13
#include <stdio.h>
int main()
{
int i;
float population[76],rate,diff[76];
population[0]=7400000;
rate=1.13;
printf("Current Population(in thou) %f\nGrowth rate  %.2f%\n",population[0],rate);
printf("Year\tPopulation(in thou)\tGrowth\n");
for(i=1;i<76;i++)
{
	diff[i]=(population[i-1]*rate)/100;
	population[i]=population[i-1]+diff[i];
	printf("%d\t%f\t\t%f\n",i,population[i],diff[i]);
}
i=1;
while(population[i]<2*population[0])
{
	i++;
}
printf("On %d year population will be double than current \n",i);	
return 0;
}

