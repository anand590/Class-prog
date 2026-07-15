#include<stdio.h>
int main(){
int i,x=1,n;
scanf("%d",&n);
for(i=1;i<=n;i++){
        x*=i;
}
printf("Factorial of %d : %d\n",n,x);

}
