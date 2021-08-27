#include <stdio.h>
#include <math.h>
int main()
{
printf("SUNIT JALAN, 200911218\n");
int n;
printf("Enter the number to be checked: ");
scanf("%d",&n);
int t=n;
int s=0;
while(t>0)
{
int dig =t%10;
int a =(int)pow(dig,3);
s =s+a;
t=t/10;
}
if (n==s)
printf("The Entered number is a Armstrong number.\n");
else
printf("The Entered number is not a Armstrong number.\n");

return 0;
}
