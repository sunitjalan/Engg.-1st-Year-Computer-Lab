#include<stdio.h>
int main(){
printf("SUNIT JALAN, 200911218\n");
int sum=0,rem,temp,num;
printf("Enter number: ");
scanf("%d",&num);
for(temp=num;temp>0;){
rem = temp%10;
sum = sum+rem;
temp/=10;
if(temp==0){
if(sum>9){
temp = sum;
sum = 0;
}
}
}
printf("Generic root: %d\n",sum);
return 0;
}
