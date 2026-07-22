#include<stdio.h>
int main(){
int a,i,j,n,dei[100],an[100],temp=1,sm,k;
scanf("%d",&n);
for(i=0;i<n;i++)
    {
        scanf("%d",&dei[i]);
    }
    a=0;
for(a=0;a<n;a++)
    {
        sm=0;
        for(k=0;k<a;k++)
        {
            if(dei[k]==dei[a])
            {
                sm=1;
                break;
            }
        }
        if(sm==1)
            continue;
        for(j=a+1;j<n;j++)
        {
            if(dei[a]==dei[j])
            temp++;

            }
            printf("%d occurs %d Times \n",dei[a],temp);
            temp=1;
    }


}
