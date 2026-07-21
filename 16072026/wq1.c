/*Write the program to print the following pattern.
A
B B
C C C
D D D D*/
#include<stdio.h>
int main(){
    int n,i,j;
    char ar;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    for(j=1;j<=i;j++){
            ar=64;
        printf("%c",ar+i);

        }
        printf("\n");

}
}
