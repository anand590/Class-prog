//Write a program in C to find sum of digits of a given number
#include<stdio.h>
int main(){
int a,x=0;
scanf("%d",&a);
for(;a!=0;){
    x+=a%10;
    a=a/10;
}
printf("%d",x);
}
