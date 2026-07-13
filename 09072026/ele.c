#include<stdio.h>
int main(){
    int a,b ;
    printf("enter the unit consumed:");
    scanf("%d",&a);
    if(a<=200)
        printf("Cost of the unit is%d",a*3);
    else if(a>201&&a<500)
        printf("Cost of the unit is%d",a*4);
    else if(a>501&&a<=1000)
        printf("Cost of the unit is%d",a*8);
    else
        printf("Cost of the unit is%d",a*10);
    }
