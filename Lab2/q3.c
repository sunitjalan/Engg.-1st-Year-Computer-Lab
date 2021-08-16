#include<stdio.h>
int main()
{
printf("SUNIT JALAN, 200911218\n");
int a,b;
printf("Enter the two numbers to be swapped:\n");
scanf("%d%d",&a,&b);
printf("Before swap a=%d, b=%d\n",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("After swap a=%d, b=%d",a,b);
return 0;
}
