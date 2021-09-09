#include<stdio.h>
//Program to arrange elements in ascending or descending order.
int main()
{
printf("SUNIT JALAN, 200911218\n");
int n, ar[10], temp=0;
char choice;
printf("\nEnter the number of elements: ");
scanf("%d",&n);
printf("\nEnter the elements of the array");
for (int i=0 ; i<n ; i++) {
printf("\nEnter element %d-",i+1);
scanf("%d",&ar[i]);
}
printf ("\nIf you want to arrange in ascending order press 'a' and if you want to arrange in descending order press 'd' \n");
scanf(" %c",&choice);
printf("\n");
switch(choice) {
case 'a' :
{
for (int i=0 ; i<n-1 ; i++) {
for (int j=0 ; j<n-i-1 ; j++) {
if(ar[j]>ar[j+1]) {
temp=ar[j];
ar[j]=ar[j+1];
ar[j+1]=temp;
}
}
}
printf("\nAscending order: \n");
for (int k=0 ; k<n ; k++) {
printf("%d ",ar[k]);
}
break;
}
case 'd' :
{
for (int i=0 ; i<n-1 ; i++) {
for (int j=0 ; j<n-i-1 ; j++) {
if(ar[j]<ar[j+1]) {
temp=ar[j];
ar[j]=ar[j+1]; ar[j+1]=temp;
}
}
}
printf("\nDescending order: \n");
for (int k=0 ; k<n ; k++) {
printf("%d ",ar[k]);
}
break;
}
}
return 0;
}
