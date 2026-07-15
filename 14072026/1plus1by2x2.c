//Write a C program to find sum of series 1 + 1/(2*2) + 1/(3*3) + 1/(4*4) + ….. + 1/(n*n)
#include<stdio.h>
int main(){
    float n,i,x,p=1,sum=0;
scanf("%f",&n);
for(i=1;i<=n;i++){

sum+=(1/(i*i));
}
printf("%f\n",sum);

}
