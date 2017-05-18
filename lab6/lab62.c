#include <stdio.h>
int main()
{
int n,digit,temp,a=1,num=0;
printf("Enter the number: ");
scanf("%d",&n);
while(n!=0)
{
digit=n%10;
n=n/10;
temp=a*digit;
a=a*2;
num=num+temp;
}
printf("%d\n",num);
return 0;
}
 
