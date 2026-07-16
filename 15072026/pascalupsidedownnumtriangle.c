#include<stdio.h>
int main(){
int i,j,n,q,k,l,f,g,h,d;
scanf("%d",&n);
for(i=1;i<=n;i++){
    for(k=i;k<=n;k++){
        printf("  ");
    }
    for(j=1;j<=i;j++){
        printf("%d ",j);
    }
    for(l=i-1;l>=1;l--){
        printf("%d ",l);
    }
    printf("\n");
}

for(f=n;f>0;f--){
    for(g=f-1;g<=n;g++){
        printf("  ");
    }
    for(h=1;h<f;h++){
        printf("%d ",h);
    }
    for(d=f-2;d>=1;d--){
        printf("%d ",d);
    }

printf("\n");
}
}


