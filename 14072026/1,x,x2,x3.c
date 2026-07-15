//Write a C program to find sum of series 1+x+x2+x3……+xn
#include<stdio.h>
int main(){
int n,i,x,p=1,sum=1;
scanf("%d",&n);
for(i=1;i<=n;i++){
p*=n;
sum+=p;
}
printf("%d\n",sum);

}
