#include<stdio.h>
int main(){
int i,j,n,k,l;
scanf("%d",&n);
for(i=1;i<=n;i++){
    for(k=i;k<n;k++){
        printf(" ");
    }
    for(j=1;j<=i;j++){
        printf("*");
    }
    for(l=2;l<=i;l++){
        printf("*");
    }
    printf("\n");
}
    }


