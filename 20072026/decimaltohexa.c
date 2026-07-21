#include<stdio.h>
int main(){

int a,i,n,b,count=0,re,x;
char ch,arr[100];
printf("enter the decimal num:");
scanf("%d",&n);
b=n;
    for(i=1;b>0;i++)
    {

        b/=16;
        count++;
    }
    x=count;
    for(i=0;i<=count;i++){
        re=n%16;
        n/=16;
            if(re>=0&&re<10)
                ch=re+'0';
            else if(re==10)
                ch='A';
            else if(re==11)
                ch='B';
            else if(re==12)
                ch='C';
            else if(re==13)
                ch='D';
            else if(re==14)
                ch='E';
            else if(re==15)
                ch='F';

        arr[x--]=ch;
    }
    for(i=1;i<=count;i++)
        printf("%c  ",arr[i]);
}
