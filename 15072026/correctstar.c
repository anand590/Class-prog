#include<stdio.h>
int main(){
int i,j,n,q,k,l,f,g,h,d;
scanf("%d",&n);
for(i=0;i<=n;i++){
    for(k=i;k<=n;k++){
        printf("  ");
    }
    for(j=1;j<=i;j++){
        printf("  * ");
    }
    printf("\n");
}

for(f=n;f>0;f--){
    for(g=f-1;g<=n;g++){
        printf("  ");
    }
    for(h=1;h<f;h++){
        printf("  * ",h);
    }

printf("\n");
}
}


