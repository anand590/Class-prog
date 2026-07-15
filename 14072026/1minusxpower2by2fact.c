//Write a program in C to find the sum of the series [ 1-X2/2!+X4/4!- .........].
#include<stdio.h>
int main(){
    int n,x=1,fina,i,j,y;
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        for(j=i;j<0;j--)
            y*=i;
        x=(i*i)/y;
        if(i%4!=0)
            fina-=x;
        else
            fina+=x;
    }
}
