#include<stdio.h>
int main()
{
printf("SUNIT JALAN, 200911218\n");
int sum=0 , n , choice , num;
printf("PROGRAM TO CALCULATE SUM OF n POSITIVE INTEGERS \nIf you want to break if input is negative integer press 1 \nIf you want to continue if input is negative press 2 \n");
scanf("%d",&choice);
printf("Enter the no of terms you want to add ");
scanf("%d",&n);
if (choice==1)
{
for (int i=0 ; i<n ; i++)
{
printf("Enter the no n%d ",i+1);
scanf("%d",&num);
if (num<0)
{
break;
}
else
{
sum+=num; }
}
printf("SUM = %d",sum);
}
else if (choice==2)
{
for (int i=0 ; i<n ; i++)
{
printf("Enter the no n%d ",i+1);
scanf("%d",&num);
if(num<0)
{
continue;
}
sum+=num;
}
printf("SUM = %d",sum);
}
else
{
printf("Check your input");
}
return 0;
}
