#include<stdio.h>
//Program to search the position of number and delete it from the array
int main()
{
printf("SUNIT JALAN, 200911218\n");
int ar[10],n,pos=-1,x,temp;
printf("\nEnter the number of elements: ");
scanf("%d",&n);
printf("\nEnter the elements of the array ");
for(int i=0 ; i<n ; i++) {
printf("\nEnter element %d-",i+1);
scanf("%d",&ar[i]);
}
printf("\nEnter the number to be deleted: ");
scanf("%d",&x);
printf("\n");
for (int i=0 ; i<n ; i++) {
if(ar[i]==x) {
pos=i;
}
}
if(pos!=-1){
for (int i=pos ; i<n-1 ; i++) {
ar[i]=ar[i+1];
}
for(int i=0 ; i<n-1 ; i++) {
printf("%d ",ar[i]);
}
}
else{
printf("Element is not in the array.");
}

return 0;
}
