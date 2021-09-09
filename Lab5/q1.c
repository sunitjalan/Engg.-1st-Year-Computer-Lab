#include<stdio.h>
//Program to find the largest and smallest element in a 1D array.
int main() {
printf("SUNIT JALAN, 200911218\n");
int a[10],n,large,small;
printf("\nEnter the number of elements: ");
scanf("%d",&n);
printf("\nEnter the elements of the array ");
for (int i=0 ; i<n ; i++) {
printf("\nEnter element-%d : ",i+1);
scanf("%d",&a[i]);
}
large=small=a[0];
for (int i=1 ; i< n ; i++) {
if (a[i]>large)
{
large=a[i];
}
if (a[i]<small)
{
small=a[i];
}
}
printf("\n%d is the largest element.",large);
printf("\n%d is the smallest element.\n",small);
return 0;
}
