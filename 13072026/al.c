#include<stdio.h>
#include<ctype.h>
int main(){
char a;
printf("enter the alphabet:");
scanf("%c",&a);
if (isalpha(a))
        printf("its a alph");
else
    printf("not");
}
