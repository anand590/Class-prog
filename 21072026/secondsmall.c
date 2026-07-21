#include<stdio.h>
int main(){
int a,i,j,n,dei[100],temp,sm;
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d",&dei[i]);
}
sm=dei[0];
temp=dei[1];
if(sm>temp){
    j=sm;
    sm=temp;
    temp=j;
}
for(i=0;i<n;i++)
{
    if(dei[i]<sm)
    {
        temp=sm;
        sm=dei[i];
    }
    else if(dei[i]<temp&&dei[i]>sm)
        temp=dei[i];
}
   printf("%d",temp);}

