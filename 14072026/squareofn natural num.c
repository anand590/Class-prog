//Write a program in C to display the n terms of square natural number and their sum.
#include<stdio.h>
int main(){
    int n,i,c,x=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        c=i*i;
        if(c<=n){
            x=x+c;
            }
        else
            {break;}
        }
    printf("%d",x);
}
