#include <stdio.h>
int main(){
int a,x,b;
printf("Enter the units consumed");
scanf("%d",&a);
x=a<=200?1:(a<=500?2:(a<=1000?3:4));
switch(x){
case 1:
    b=a*3;
    printf("Amount%d",b);
    break;

case 2:
    b=a*4;
    printf("Amount%d",b);
    break;
case 3:
    b=a*8;
    printf("Amount%d",b);
    break;
case 4:
    b=a*10;
    printf("Amount%d",b);
    break;


    }
}
