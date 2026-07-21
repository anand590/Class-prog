#include<stdio.h>
int main(){

int a[100],n,i;
scanf("%d",&n);
a[0]=0;
a[1]=1;
if(n==1)
    printf("%d ",a[0]);
else
    printf("%d%d",a[0],a[1]);

for(i=0;i<n-2;i++)
{
    a[i+2]=a[i]+a[i+1];
    printf("%d",a[i+2]);
}
}
