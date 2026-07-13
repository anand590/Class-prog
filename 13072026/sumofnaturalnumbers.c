#include<stdio.h>
int main(){
int i=1,a,x=0;
printf("Enter n:");
scanf("%d",&a);
print:
    x+=i;
    i++;
if (i<=a)
        goto print;
        printf("%d\n",x);

}
