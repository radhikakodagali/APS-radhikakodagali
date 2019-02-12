#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[]={-2,-3,4,-1,-2,1,5,-3};
    int tmax=0,max=0,i,j,n=8;
    for(i=0;i<n;i++)
    {
        tmax=tmax+a[i];
        if(tmax<0)
            tmax=0;
        if(tmax>max)
            max=tmax;
    }
    printf("Largest subarray sum:%d\n",max);
    return 0;
}
