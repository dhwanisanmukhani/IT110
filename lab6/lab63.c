#include<stdio.h>
int main()
{
int c,first,last,middle,n,search;
int arr[10]={1,2,3,4,5,6,7,8,9,10};
printf("Enter the value to be searched: ");
scanf("%d",&search);
first=0;
last=9;
middle=(first+last)/2;
while(first<=last)
{
	if(arr[middle]<search)
	{
		first=middle+1;
	}
	else if(arr[middle]==search)
	{
		printf("%d is present\n",search);
		break;
	}
	else
	{
		last=middle-1;
	}
	middle=(first+last)/2;
}
if(first>last)
{
printf("%d is not present\n",search);
}
return 0;
}

