#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k,n,w,x,sum=0;
    scanf("%d %d %d",&k,&n,&w);
    for(int i=1; i<=w; i++)
    {
        x=0;
        x=k*i;
        sum+=x;
    }
    //printf("%d\n",sum);
    if(sum>n)
        printf("%d\n",(sum-n));
    if(sum<=n)
        printf("0");

    return 0;
}
