/*. Write the program to print the following pattern.
            1
          2 3 2
        3 4 5 4 3
      4 5 6 7 6 5 4
    5 6 7 8 9 8 7 6 5 */
#include<stdio.h>
int main(){
int i,j,n,k,l;
scanf("%d",&n);
for(i=1;i<=n;i++){
    for(k=1;k<=n-i;k++){
        printf("  ");
    }
    for(j=i;j<2*i;j++){
        printf("%d ",j);
    }
    for(l=2*i-2;l>=i;l--){
        printf("%d ",l);
    }
    printf("\n");
}
    }


