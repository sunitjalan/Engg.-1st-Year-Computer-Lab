#include<stdio.h>
#include<math.h>
int main(){
printf("SUNIT JALAN, 200911218\n");
int i,j,N,temp=1;
printf("Enter N: ");
scanf("%d",&N);
for(i=1;i<=N;i++){
for(j=1;j<=i;j++){
printf("%d\t",temp);
temp++;
}
printf("\n");
}
return 0;
}
