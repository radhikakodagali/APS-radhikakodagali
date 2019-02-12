#include <stdio.h>
#include <stdlib.h>
int min(int i,int j)
{

    if(i<j)
        return i;
    else
        return j;
}
int main()
{
    int n=4,k=2;
    int i,j;
    int c[n][k];
    for(i=0;i<=n;i++)
    {

        for(j=0;j<=min(i,k);j++)
        {

            if(j==0 || i==j)
                c[i][j]=1;
            else
                c[i][j]=c[i-1][j-1]+c[i-1][j];
            printf("%d\t",c[i][j]);
            }
            printf("\n");
    }
    return 0;
}
