#include <stdio.h>
int main() {
int a=10,b=20,c=30,x;
x=a>b?(a>c?1:3):c>b?3:2;
switch(x){
case 1:
    printf("a is greater");
    break;

case 2:
    printf("b is greater");
    break;
case 3:
    printf("c is greater");
    break;}

}
