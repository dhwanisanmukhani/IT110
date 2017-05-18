#include<stdio.h>
int main()
{
FILE *fp;
FILE *fp1;
while(1)
{
 printf("Choose one of this\n");
 printf("1.Enter the employee details\n");
 printf("2.Left of the Employee\n");
 printf("3.update the salary\n");
 printf("4.Exit\n");
 int n;
 scanf("%d",&n);
 if(n==1)
 {
  printf("Enter the details of employee\n");
  char name[10];
  char sex,c;
  int gs;
  char buff[50];
  printf("Enter the name\n");
  scanf("%s",name);
  printf("Enter the sex\n");
  scanf("%c%c",&c,&sex);
  printf("Enter the Gross Salary\n");
  scanf("%d",&gs);
  fp=fopen("//home/student/em.txt","r");
  fp1=fopen("//home/student/em.txt","a");
  int j=0;
  while(fgets(buff,50,fp)>0)
  j++;
  fprintf(fp1,"%d",j+1);
  fputs(" ",fp1);
  fputs(name,fp1);
  fputs(" ",fp1);
  fputc(sex,fp1);
  fputs(" ",fp1);
  fprintf(fp1,"%d",gs);
  fclose(fp1);
 fclose(fp);
 }
 else if(n==2)
 {
  int p,i,k=0;
  char buff[50];
  printf("Enter the Serial Numebr of employee leaving\n");
  scanf("%d",&p);
  fp=fopen("//home/student/em.txt","r+");
  for(i=1;i<p;i++)
  fgets(buff,50,fp);
  for(i=0;i<3;i++)
  fscanf(fp,"%s",buff);
  fputs(" ",fp);
  fprintf(fp,"%05d",k);
  fputs("\n",fp);
  fprintf(fp,"%d",p+1);
  fputs(" ",fp);
  fclose(fp);
 }
 else if(n==3)
 {
  int p,i,salary;
  char buff[50];
  printf("Enter the Serial Numebr of employee leaving\n");
  scanf("%d",&p);
  printf("Enter the new salary\n");
  scanf("%d",&salary);
  fp=fopen("//home/student/em.txt","r+");
  for(i=1;i<p;i++)
  fgets(buff,50,fp);
  for(i=0;i<3;i++)
  fscanf(fp,"%s",buff);
  fputs(" ",fp);
  fprintf(fp,"%05d",salary);
  fputs("\n",fp);
  fprintf(fp,"%d",p+1);
  fputs(" ",fp);
  fclose(fp);
 }

 else
 return 0;
} 
return 0;
}

