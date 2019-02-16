#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int count_set_bits(int n)
{
    int i,cnt=0;
    for(i=0;i<3;i++)
    {
        if(n & 1<<i)
            cnt++;
    }
    return cnt;
}
int min(int a,int b)
{
    if(a<b)
        return a;
    else
        return b;
}

int assign(int cost[3][3],int N)
{
    int set_size=pow(2,N);
    int x,i,j,dp[set_size],mask;

    dp[0]=0;
    for(i=1;i<set_size;i++)
        dp[i]=INT_MAX;
    for(mask=0;mask<set_size;mask++)
    {
        x=count_set_bits(mask);
        for(j=0;j<N;j++)
        {
            if((mask & (1<<j)) ==0)
            {
               // printf("massk");
               dp[mask|(1<<j)]=min(dp[mask | (1<<j)],dp[mask]+cost[x][j]);
            }
        }

    }

    return dp[set_size-1];
}

int main()
{
    int cost[3][3]={{8,2,5},{3,2,7},{4,1,2}};
    printf("%d",assign(cost,3));


    return 0;
}

