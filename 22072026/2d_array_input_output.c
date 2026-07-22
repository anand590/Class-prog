#include<stdio.h>
int main()
{
    int i,j,n,m;
    int dei[100][100];
    scanf("%d",&n);
    scanf("%d",&m);
    //column
    for(i=0;i<n;i++)
        {
            //row
            for(j=0;j<m;j++)
        {
            scanf("%d",&dei[i][j]);
        }
    }
    for(i=0;i<n;i++)
        {
            printf("\n");
            for(j=0;j<m;j++)
        {
            printf("%d",dei[i][j]);
        }
    }

}
