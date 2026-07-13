#include<stdio.h>
int main(){
int i=1,a;
printf("Enter n:");
scanf("%d",&a);
print:
    printf("%d\n",i);
    i=i+2;
    if (i<=a)
        goto print;
}
