#include <stdio.h>

int main() {
for(int i=2;i<=10;i+=2){
    if(i==8)
        continue;
    printf("%d",i);
}
}
