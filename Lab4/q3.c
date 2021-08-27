#include<stdio.h>
#include<math.h>
double fact(int);
int main(){
printf("SUNIT JALAN, 200911218\n");
int n,x,i,sign=1,count=1;
double f;
float rad,res=0;
printf("Enter x in degrees and n value: \n");
scanf("%d %d",&x,&n);
rad = x*(3.14159/180.0);
for(i=1;count<=n;i=i+2){
f = fact(i);
res = res + (sign*pow(rad,i))/f;
sign = sign * (-1);
count++;
}
printf("sin(%d) is: %f\n",x,res);
return 0;
}
double fact(int x){
int i;
double mul=1;
for(i=1;i<=x;i++){
mul=mul*i;
}
return mul;
}
