#include <stdio.h>
#include <math.h>
int main()
{
printf("SUNIT JALAN, 200911218\n");
float r;
printf("Enter radius : ");
scanf("%f",&r);
double pi = 22.0/7.0;
double vol = (4.0*(pi)*pow(r,3))/3.0;
double sa = 4.0*pi*pow(r,2);
printf("Volume is : %f \n", vol);
printf("Surface Area is : %f \n", sa);
return 0;
}
