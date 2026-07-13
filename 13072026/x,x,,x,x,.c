#include<stdio.h>

int main(){
int p=1,i=1,n,a;
printf("enter the value");
scanf("%d",&a);
scanf("%d",&n);
print:

p=p*a;
printf("%d ,",p);
i++;
if(i<=n) goto print;
}
