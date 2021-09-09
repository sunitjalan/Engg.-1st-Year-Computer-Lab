#include<stdio.h>
//Program to search and count the occurrences of a number in a matrix.
int main(){
printf("SUNIT JALAN, 200911218\n");
int rows, columns, srchElement, count=0;
printf("Enter the number of rows and columns: ");
scanf("%d %d", &rows, &columns);
int array[rows][columns];
printf("Enter %d elements: \n", (rows*columns));
for(int i=0; i<rows; i++){
for(int j=0; j<columns; j++){
printf("Enter element : ");
scanf("%d", &array[i][j]);
}
}
printf("Enter the element to get the position(s): ");
scanf("%d", &srchElement);
for(int i=0; i<rows; i++){
for(int j=0; j<columns; j++){
if(array[i][j] == srchElement){
printf("(%d, %d) \n", i, j);
count++;
}
}
}
if(count==0) {
printf("\nElement Not found! \n");
}
else {
printf("\nThe element %d occurs %d times",srchElement,count);
}
return 0;
}
