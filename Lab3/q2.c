#include<stdio.h>
int main(){
printf("SUNIT JALAN, 200911218\n");
int i,num,count,min,max;
printf("Enter the limits: \n");
scanf("%d %d", &min, &max);
num = min;
printf("Prime Numbers Between %d and %d are:\n", min, max);
while(num <= max){
count = 0;
i = 2;
while(i<=num/2){
if(num%i==0){
count++;
break;
}
i++;
}
if(count == 0 && num != 1 ){
printf("%d\t", num);
}
num++;
}
return 0;
}
