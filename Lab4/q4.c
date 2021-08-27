#include<stdio.h>
int main(){
printf("SUNIT JALAN, 200911218\n");
int i, num, sum = 0;
printf("Enter a number: \n");
scanf("%d", &num);
for(i=1; i<num; i++){
if(num%i == 0){
sum += i;
}
}
if(sum==num){
printf("\n%d is a perfect number\n", num);
}
else{
printf("%d is not a perfect number\n", num);
}
return 0;
}
