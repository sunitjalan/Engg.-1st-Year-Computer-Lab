#include<stdio.h>
#include<math.h>
int main(){
printf("SUNIT JALAN, 200911218\n");
int i,j,n,k,mul=1;
printf("Enter n and k: ");
scanf("%d %d",&n,&k);
for(i=1;i<=n;i++){
for(j=1;j<=k;j++){
mul = i*j;
printf("%d\t",mul);
}
printf("\n");
}
return 0;
}
