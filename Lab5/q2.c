#include<stdio.h>
//Program to print all the prime numbers in a 1D array.
int main()
{
printf("SUNIT JALAN, 200911218\n");
int a[10], n, temp[10], prime;
printf("Enter the number of elements: ");
scanf("%d",&n);
printf("\nEnter the elements of the array");
for (int i=0 ; i<n ; i++) {
printf("\nEnter element-%d: ",i+1);
scanf("%d",&a[i]);
temp[i]=a[i];
}
printf("\n");
for (int i=0 ; i<n ; i++) {
prime=1;
for(int j=2 ; j<a[i] ; j++) {
if(a[i]%j==0) {
prime=0;
break;
}
}
if (prime==1) {
printf("%d ",a[i]);
}
}
printf("are the prime numbers.\n");
return 0;
}
