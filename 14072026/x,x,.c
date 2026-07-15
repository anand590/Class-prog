#include<stdio.h>
int main(){
int i,x=1,a,b;
scanf("%d%d",&a,&b);
for(i=1;i<=b;i++){
x*=a;
printf("%d\n",x);
}
}
