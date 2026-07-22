#include<stdio.h>
int main()
{
    int dei[100],b[100],x,i,y,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
     scanf("%d",&dei[i]);
    }
    printf("Enter the no of rotation:");
    scanf("%d",&x);
    for(i=0;i<x;i++)
    {
        b[i]=dei[i];
    }
    for(i=0;i<n-x;i++){
        dei[i]=dei[i+x];
    }
    i=0;
    y=n-x;
    for(y;y<n;y++)
        dei[y]=b[i++];
    for(i=0;i<n;i++){
        printf("%d\n",dei[i]);
    }
}
