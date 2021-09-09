#include<stdio.h>
//Program to insert. An element into a 1D array.
int main()
{
printf("SUNIT JALAN, 200911218\n");
int ar[10], pos, n, x;
printf("\nEnter the number of elements: ");
scanf("%d",&n);
printf("\nEnter the elements in the array ");
for (int i=0 ; i<n; i++) {
printf("\nEnter element %d-",i+1);
scanf("%d",&ar[i]);
}
printf("\nEnter the element to be added: ");
scanf("%d",&x);
printf("Enter the index at which the element is to be added: ");
scanf("%d",&pos);
for (int i=n+1 ; i>=pos ; i--) {
ar[i+1]=ar[i];
}
ar[pos]=x;
for (int i=0 ; i<n+1 ; i++) {
printf("%d, ",ar[i]);
}
printf("is the modifed array.");
return 0;
}
