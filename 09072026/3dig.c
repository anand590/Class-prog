#include<stdio.h>
int main(){
    int a ;
    printf("enter the no:");
    scanf("%d",&a);
    if(a>99&&a<1000)
        printf("it is 3 digit");
    else
        printf("not");
}
