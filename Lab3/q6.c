#include<stdio.h>
#include<math.h>
int main(){
printf("SUNIT JALAN, 200911218\n");
int num=1,sum=0,num2=1,sum2=0;
//finding sum of natural nos up to 20, and if sum is greater 50, we break while loop
while(num<20){
sum = sum + num;
printf("While sum is %d\n",sum);
num++;
if(sum>50){
break;
}
}
//finding sum of natural nos up to 100, and if sum is less 50, we continue do-while loop
do{
sum2 = sum2 + num2;
num2++;
if(sum2<50){
continue;
}
printf("Do while sum is %d\n",sum2);
}
while(num2<20);
return 0;
}
