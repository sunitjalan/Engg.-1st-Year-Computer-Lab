#include <stdio.h>
int main()
{
printf("SUNIT JALAN, 200911218\n");
int a,b,c;
printf("Enter 3 numbers for comparison:");
scanf("%d %d %d", &a,&b,&c);
if((a>b) && (a>c))
printf("%d is the largest among the given numbers.",a);
else if(b>c)
printf("%d is the largest among the given numbers.",b);
else
printf("%d is the largest among the given numbers.",c);
return 0;
}
