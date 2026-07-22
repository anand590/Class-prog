#include<stdio.h>
int main()
{
    int i,j,n,m,o,p;
    int a[100][100],b[100][100],c[100][100];

    scanf("%d",&n);
    scanf("%d",&m);
    //column
    for(i=0;i<n;i++)
        {
            //row
            for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

      for(i=0;i<n;i++)
        {
            //row
            for(j=0;j<m;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }

    for(i=0;i<n;i++)
        {
            printf("\n");
            for(j=0;j<m;j++)
        {
            printf("%d",c[i][j]);
        }
    }


}
