#include<stdio.h>

int main(){
char a;
printf("enter the alphabet:");
scanf("%c",&a);
if (a>=64&&a<=90)
        printf("its a uppercase");
else if(a>=97&&a<=122)
    printf("Its Lowercase");
else
    printf("NOT");
}
