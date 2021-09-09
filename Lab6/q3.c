#include <stdio.h>
//Program to perform matrix multiplication.
int main() {
printf("SUNIT JALAN, 200911218\n");
int m, n, p, q, c, d, k, sum = 0;
int first[10][10], second[10][10], multiply[10][10];
printf("\nEnter the number of rows and columns of first matrix: ");
scanf("%d %d", &m, &n);
printf("Enter the elements of first matrix\n");
for (c = 0 ; c < m ; c++) {
for (d = 0 ; d < n ; d++) {
printf("Enter element at position %d %d- ",c,d);
scanf("%d", &first[c][d]);
}
}
printf("\nEnter the number of rows and columns of second matrix:");
scanf("%d %d", &p, &q);
if (n != p)
printf("\nMatrices with entered orders can't be multiplied with each other.");
else
{
printf("Enter the elements of second matrix\n");
for (c = 0 ; c < p ; c++) {
for (d = 0 ; d < q ; d++) {
printf("Enter element at position %d %d-",c,d);
scanf("%d", &second[c][d]);
}
}
for (c = 0 ; c < m ; c++) {
for (d = 0 ; d < q ; d++) {
for (k = 0 ; k < p ; k++) {
sum = sum + first[c][k]*second[k][d];
}
multiply[c][d] = sum;
sum = 0;
}
}
printf("Product of entered matrices:-\n");
for (c = 0 ; c < m ; c++) {
for (d = 0 ; d < q ; d++) {
printf("%d\t", multiply[c][d]); }
printf("\n");
}
}
return 0;
}
