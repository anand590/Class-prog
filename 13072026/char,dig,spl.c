#include<stdio.h>
int main(){
char a;
scanf("%c",&a);
if (a>=65&&a<=122)
    printf("its a char");
else if(a>=48&&a<=57)
    printf("its a digit");
else
    printf("its a spl char");
}
