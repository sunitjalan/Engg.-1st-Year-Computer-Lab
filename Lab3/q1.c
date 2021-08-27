#include<stdio.h>
int main(){
printf("SUNIT JALAN, 200911218\n");
int rev=0,rem,n,temp;
printf("Enter number: ");
scanf("%d",&n);
temp = n;
while(n!=0){
rem = n%10;
rev = rev*10 + rem;
n/=10;
}
if(temp==rev){
printf("It is a Palindrome\n");
}
else
printf("It is not a Palindrome\n");
return 0;
}
