#include<stdio.h>
int main()
{
printf("SUNIT JALAN, 200911218\n");
int a,b,sum,diff,prod,quot;
printf("Enter two numbers:");
scanf("%d%d", &a, &b);
sum=a+b;
diff=a-b;
prod=a*b;
quot=a/b;
printf("The sum of the two numbers is %d.\nThe difference of the two numbers is %d.\n",sum ,diff);
printf("The product of the two numbers is %d.\nThe quotient of the two numbers is %d.\n",prod,quot);
return 0;
}
