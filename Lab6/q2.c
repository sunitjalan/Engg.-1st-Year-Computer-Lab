#include <stdio.h>
#include <math.h>
//Program to find trace and norm of a square matrix.
int main () {
printf("SUNIT JALAN, 200911218\n");
static int array[10][10];
int i, j, m, n, sum = 0, sum1 = 0, a = 0;
float normal;
printf("\nEnter the order of the square matrix: ");
scanf("%d %d", &m, &n);
printf("\nEnter the elements of the square matrix ");
for (i = 0; i < m; ++i) {
for (j = 0; j < n; ++j) {
printf("\nElement at position %d %d - ",i,j);
scanf("%d", &array[i][j]);
a = array[i][j] * array[i][j];
sum1 = sum1 + a;
}
}
normal = sqrt(sum1);
printf("\nThe normal of the given matrix is = %f", normal);
for (i = 0; i < m; ++i) {
sum = sum + array[i][i];
}
printf("\nTrace of the matrix is = %d", sum);
return 0;
}
