/*Write the program to print the following pattern.
a
a b
a b c
a b c d
a b c d e*/

#include<stdio.h>
int main(){
    int n,i,j;
    char ar;
scanf("%d",&n);
for(i=1;i<=n;i++)
{

    for(j=1;j<=i;j++){
        ar=96;
        printf("%c",ar+j);

        }

        printf("\n");

}
}
