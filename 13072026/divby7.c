#include <stdio.h>
int main(){
int a;
printf("enter the num");
scanf("%d",&a);
switch(a%7){
case 0:
    printf("Divisable by 7");
    break;
default:
    printf("Not divisable");
}
}
