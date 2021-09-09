#include<stdio.h>
//Program to interchange diagonals of a matrix.
int main() {
printf("SUNIT JALAN, 200911218\n");
int i, j, rows, columns, arr[10][10], temp;
printf("\nEnter Number of rows and columns: ");
scanf("%d %d", &i, &j);
printf("\nEnter the Matrix Elements \n");
for(rows = 0; rows < i; rows++) {
for(columns = 0;columns < j;columns++) {
printf("Enter element at position %d %d- ",rows,columns);
scanf("%d", &arr[rows][columns]);
}
}
printf("\nOriginal matrix: \n");
for(rows = 0; rows<i; rows++) {
for(columns = 0; columns < j; columns++) {
printf("%d\t",arr[rows][columns]);
}
printf("\n");
}
if(rows == columns) {
for(rows = 0; rows < i; rows++) {
temp = arr[rows][rows];
arr[rows][rows] = arr[rows][i - rows - 1];
arr[rows][i - rows - 1] = temp;
}
printf("\nMatrix Elemnts after Interchanging Diagonals are: \n");
for(rows = 0; rows < j; rows++) {
for(columns = 0; columns < i; columns++) {
printf("%d \t ", arr[rows][columns]);
}
printf("\n");
}
}
else {
printf("\nThe Matrix that you entered is Not a Square matrix");
}
return 0;
}
