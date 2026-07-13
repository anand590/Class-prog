#include<stdio.h>
int main(){
int a,i=1 ;
printf("Enter n");
scanf("%d",&a);
hi:
printf("%d * %d =%d\n",i,a,(i*a));
i++;
if(i<=10) goto hi;
}
