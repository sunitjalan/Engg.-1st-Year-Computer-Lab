#include<stdio.h>
//Program to determine if a matrix is symmetric or not.
int main() {
printf("SUNIT JALAN, 200911218\n");
int m, n, c, d, matrix[10][10], transpose[10][10];
printf("Enter the number of rows and columns of matrix: ");
scanf("%d%d", &m, &n);
printf("Enter elements of the matrix\n");
for (c = 0; c < m; c++) {
for (d = 0; d < n; d++) {
printf("\nEnter element at position %d %d-",c,d);
scanf("%d", &matrix[c][d]);
}
}
for (c = 0; c < m; c++) {
for (d = 0; d < n; d++) {
transpose[d][c] = matrix[c][d];
}
}
if (m == n) {
for (c = 0; c < m; c++) {
for (d = 0; d < m; d++) {
if (matrix[c][d] != transpose[c][d])
break;
}
if (d != m)
break;
}
if (c == m)
printf("The matrix is symmetric.\n");
else
printf("The matrix isn't symmetric.\n");
}
else
printf("The matrix isn't symmetric.\n");
return 0;
}
