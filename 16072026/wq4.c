/*Write the program to print the Pascal's Triangle.
      1
     1 1
    1 2 1
   1 3 3 1
  1 4 6 4 1
  */
#include<stdio.h>
int main()
{
    int i,j,a,k,l,b,x,y;
    scanf("%d",&a);
    b=a-1;
    for(i=1;i<=a;i++)
    {
        for(j=i;j<a;j++)
        {
            printf(" ");

        }
        for(k=1;k<=i;k++)
        {  if(k==1)
            printf("1");
            else
                printf(" ");

        }
        for(l=i-1;l>=1;l--)
        {  if(l==1)
            printf("1");
            else
                printf(" ");
        }

        printf("\n");

    }


}
