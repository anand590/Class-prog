#include<stdio.h>
int main(){
int a,i,j,n,dei[100],temp;
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d",&dei[i]);
}
for(i=0;i<n;i++)
{
    for(j=i+1;j<n;j++)
    {
        if(dei[i]<dei[j]){
            temp=dei[i];
            dei[i]=dei[j];
            dei[j]=temp;}
    }
}
for(i=0;i<n;i++)
    printf("%d",dei[i]);
}
