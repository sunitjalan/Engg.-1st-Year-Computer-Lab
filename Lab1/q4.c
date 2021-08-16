#include<stdio.h>
int main()
{
printf("SUNIT JALAN, 200911218\n");
int intType;
float floatType;
double doubleType;
char charType;
long int longintType;
long double longdoubleType;
printf("Size of int: %zu bytes\n", sizeof(intType));
printf("Size of float: %zu bytes\n", sizeof(floatType));
printf("Size of double: %zu bytes\n", sizeof(doubleType));
printf("Size of char: %zu byte\n", sizeof(charType));
printf("Size of long int: %zu byte\n", sizeof(longintType));
printf("Size of long double: %zu byte\n", sizeof(longdoubleType));
return 0;
}
