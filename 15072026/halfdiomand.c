#include<stdio.h>
int main()
{
    int i,j,a,k,b=1,c=1,l,m=1,sum=1;
    scanf("%d",&a);

    for(i=2;i<a;i++)
    {
        b+=2;
    }

    for (i=1;i<=a;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(j%2==0)
             printf("0");
             else
                printf("1");
        }
        for(k=b;k>0;k--)
        {
            printf(" ");
            }
            b=b-2;

        for (l=m;l>=1;l--)
        {

            if(l==a){
                continue;
            }
            if(l%2==0)
             printf("0");
             else
                printf("1");

        }


        m++;
        printf("\n");
    }
    m=1;
     for(i=2;i<a;i++)
    {
        c+=2;
    }

    for (i=1;i<=a;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(j%2==0)
             printf("0");
             else
                printf("1");
        }
        for(k=c;k>0;k--)
        {
            printf(" ");
            }
            c-=2;

        for (l=m;l>=1;l--)
        {

            if(l==a){
                continue;
            }
            if(l%2==0)
             printf("0");
             else
                printf("1");

        }


        m++;
        printf("\n");
    }
}
