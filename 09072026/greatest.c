#include<stdio.h>
int main(){
    int a,b,c,x,y;
    a=10;
    b=20;
    c=9;
    x=a>(y=b>c?b:c)?a:y;
    printf("%d",x);
}
