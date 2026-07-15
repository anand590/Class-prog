//Write a C program to determine whether a given number is prime or not.
#include<stdio.h>
int main(){
int a,i,x=0;
scanf("%d",&a);
for(i=2;i<a;i++){
    if(a%i==0){
        x=1;
        break;
    }
}
if(x==1)
    printf("Its not a prime");
else
    printf("Its a Prime");
}
