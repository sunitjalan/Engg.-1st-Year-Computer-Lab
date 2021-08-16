#include<stdio.h>
int main()
{
printf("SUNIT JALAN, 200911218\n");
int x,y;
printf("Enter the value of x:");
scanf("%d",&x);
if(x>0)
{
y = 1;
}
else if (x==0)
{
y = 0;
}
else if (x<0)
{
y = -1;
}
printf("The value of y is %d.",y);
return 0;
}
