#include<stdio.h>
int main()
{
    int i,j,n,m,o,k,p;
    int a[100][100],b[100][100],c[100][100],s[100][100];
    printf("Enter the size of row and column of the first matrix\n");
    printf("Enter the column:");
    scanf("%d",&n);
    printf("Enter the row:");
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
    printf("Enter the size of row and column of the second matrix\n");
    printf("Enter the column:");
    scanf("%d",&o);
    printf("Enter the row:");
    scanf("%d",&p);
      for(i=0;i<o;i++)
        {
            //row
            for(j=0;j<p;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            for(k=0;k<m;k++){
            s[i][j]+=a[i][k]*b[k][j];
        }
        }
    }
    for(i=0;i<n;i++)
        {
            printf("\n");
            for(j=0;j<m;j++)
        {
            printf("%d",s[i][j]);
        }
    }
    return 0;
}

