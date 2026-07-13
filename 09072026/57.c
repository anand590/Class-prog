#include<stdio.h>
int main(){
int a;
char *x;
printf("Enter the Number :");
scanf("%d",&a);
x=(a%5==0 && a%7==0)?"Divisible by both":(a%5==0?"Divisible by 5":(a%7==0? "divisible by 7":"not by both"));
printf("%s",x);
}
