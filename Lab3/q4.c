#include<stdio.h>
#include<math.h>
int main(){
printf("SUNIT JALAN, 200911218\n");
int num,count=0,primeCount=0,compCount=0;
int i=0;
do{
count = 0;
printf("Enter a number: ");
scanf("%d",&num);
if(num>1){
i=1;
while(i<=num){
if(num%i==0)
count++;
i++;
}
if(count==2){
primeCount++;
}
else{
compCount++;
}
}
}
while(num!=-1);
printf("The number of prime numbers are %d.\n", primeCount);
printf("The number of composite numbers are %d.\n", compCount);
return 0;
}
