#include<stdio.h>
int main(){
int i,j,n;
scanf("%d",&n);
for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i==1||i==n)
                printf("# ");
            else{
                if(i>1&&i<n&&j==1||j==n)
                printf("# ");
            else
                printf("  ");
            }

        }
printf("\n");
    }



}


//(l=i-1;l>=1;l--)
