#include<stdio.h>
int main(){
int i=2,a,x=0;
printf("Enter n:");
scanf("%d",&a);
print:
    x+=i;
    i+=2;
    if (i<=a)
        goto print;
            printf("%d\n",x);

}
