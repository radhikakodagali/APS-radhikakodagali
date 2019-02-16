#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int subsetsum(int* set,int set_size,int value)
{
    int count=0,sum=0;
    int x;

    for(x=0;x<pow(2,set_size);x++)
    {
        int k;
        for(k=0;k<set_size;k++)
        {
           if(x & (1<<k))
           {
             sum=sum+set[k];
           }
        }
        if(sum>=value)
            count=count+1;
    }
    return count;
}

int main()
{
    int a[]={1,2};
    printf("%d",subsetsum(a,2,6));
    return 0;
}
