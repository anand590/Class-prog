#include<stdio.h>
int main(){
int a,i,j,n,dei[100],an[100],temp,sm;
scanf("%d",&n);
for(i=0;i<n;i++)
    {
        scanf("%d",&dei[i]);
    }
    i=0;
for(a=n-1;a>=0;a--){
        an[i++]=dei[a];
}
for(i=0;i<n;i++){
    printf("%d",an[i]);
}}
