#include<stdio.h>
int main(){
int a,i,j,n,dei[100],an[100],temp,sm,k,dup,count=0;
scanf("%d",&n);
for(i=0;i<n;i++)
    {
        scanf("%d",&dei[i]);
    }

for(a=0;a<n;a++)
    {
        dup=0;
        for(j=0;j<n;j++){
            if(a==j)
                continue;
            if(dei[a]==dei[j])
                dup++;
        }
        if(dup==0){
            printf("%d  ",dei[a]);
            count++;
        }

    }
    printf("\nThe Count is: %d",count);
}
