#include<stdio.h>
int main()
{
printf("SUNIT JALAN, 200911218\n");
float P,R,N,SI,CI;
printf("Enter Principle, rate and time\n");
scanf("%f %f %f",&P,&R,&N);
SI = (P * R * N)/100;
CI = P*pow((1+R/100),N);
printf("Simple interest for given values is %f\nCompound interest for given values is %f\n " , SI,CI);
return 0;
}
