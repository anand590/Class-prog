#include<stdio.h>
int main(){

int a,i,n,b,count=0,re,arr[100],x;
printf("enter the decimal num:");
scanf("%d",&n);
b=n;
    for(i=1;b>0;i++)
    {

        b/=8;
        count++;
    }
    x=count;
    for(i=0;i<=count;i++){
        re=n%8;
        n/=8;
        arr[x--]=re;
    }
    for(i=1;i<=count;i++)
        printf("%d",arr[i]);
}

