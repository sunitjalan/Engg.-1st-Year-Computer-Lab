#include<stdio.h>
int main()
{
printf("SUNIT JALAN, 200911218\n");
float a=30,b=10,c=5,d=15,x,y,z,w;
x = (a + b) * c / d;
y = ((a + b) * c) / d;
z = a + (b * c) / d;
w = (a + b) * (c / d);
printf("The results of the given operations are\n(i) %f\n(ii) %f\n(iii) %f\n(iv) %f\n",x,y,z,w);
return 0;
}
