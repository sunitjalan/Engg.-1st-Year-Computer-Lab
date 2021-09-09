#include <stdio.h>
//Program to interchange any two rows and columns in the matrix.
int main() {
printf("SUNIT JALAN, 200911218\n");
static int array1[10][10], array2[10][10];
int i, j, m, n, a, b, c, p, q, r;
printf("\nEnter the order of the matrix: ");
scanf("%d %d", &m, &n);
printf("Enter the co-efficents of the matrix \n");
for (i = 0; i < m; ++i) {
for (j = 0; j < n; ++j) {
printf("Enter element at position %d %d-",i,j);
scanf("%d,", &array1[i][j]);
array2[i][j] = array1[i][j];
}
}
printf("\nThe given matrix is \n");
for (i = 0; i < m; ++i) {
for (j = 0; j < n; ++j)
printf(" %d", array2[i][j]);
printf("\n");
}
char ch;
printf("For interchanging rows enter 'r'\n");
printf("For interchanging colums enter 'c'\n");
printf("\nEnter your choice:");
scanf("%s",&ch);
if (ch=='r') {
printf("\nEnter the numbers of two rows to be exchanged(1-%d): ",m);
scanf("%d %d", &a, &b);
for (i = 0; i < m; ++i) {
c = array1[a - 1][i];
array1[a - 1][i] = array1[b - 1][i];
array1[b - 1][i] = c;
}
printf("The matrix after interchanging the two rows(in the original matrix) \n");
for (i = 0; i < m; ++i) {
for (j = 0; j < n; ++j) {
printf(" %d", array1[i][j]);
}
printf("\n");
}
}
else if (ch=='c') { printf("\nEnter the numbers of two columns to be exchanged(1-%d): ",n);
scanf("%d %d", &p, &q);
for (i = 0; i < n; ++i) {
r = array2[i][p - 1];
array2[i][p - 1] = array2[i][q - 1];
array2[i][q - 1] = r;
}
printf("The matrix after interchanging the two columns(in the original matrix)\n");
for (i = 0; i < m; ++i) {
for (j = 0; j < n; ++j)
printf(" %d", array2[i][j]);
printf("\n");
}
}
else {
printf("\nInvalid choice entered");
return 0;
}
}
