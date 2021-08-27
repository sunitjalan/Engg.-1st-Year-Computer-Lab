#include<stdio.h>
#include<math.h>
int fact(int);
int main(){
printf("SUNIT JALAN, 200911218\n");
int n, sum=0, temp, remainder, digits=0;
printf("Input an integer: ");
scanf("%d", &n);
temp = n;
while(temp!=0){
remainder = temp%10;
temp = temp/10;
int factorial = fact(remainder);
sum = sum + factorial;
}
if (n==sum){
printf("%d is a strong number.\n", n);
}
else{
printf("%d isn't a strong number.\n", n);
}
return 0;
}
int fact(int n){
int i,f=1;
for(i=1;i<=n;i++){
f = f*i;
}
return f;
}
