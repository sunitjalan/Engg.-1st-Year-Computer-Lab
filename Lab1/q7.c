#include <stdio.h>
int main()
{
printf("SUNIT JALAN, 200911218\n");
float C,F;
printf("Enter the temperature in Fahrenheit: ");
scanf("%f", &F);
C = (F - 32) * 5 / 9;
printf("%f Fahrenheit = %f Celsius", F, C);
return 0;
}
