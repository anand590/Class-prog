#include<stdio.h>
int main(){
float x=1;
int i,a,b;
scanf("%d%d",&a,&b);
for(i=1;i<=b;i++){
x*=a;
printf("%f\n",1/x);
}
}
