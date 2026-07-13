#include<stdio.h>

int main(){
float p=1,i=1,n,a;
printf("enter the value");
scanf("%f",&a);
scanf("%f",&n);
print:

p=p*a;
printf("%f ,",1/p);
i++;
if(i<=n) goto print;
}
