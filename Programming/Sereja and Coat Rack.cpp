#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int n,d,ary[1000],m,sum=0,x,y=0;
    scanf("%d %d",&n,&d);
    for(int i=0;i<n;i++)
        scanf("%d",&ary[i]);
        sort(ary,ary+n);
    scanf("%d",&m);
    if(n==m || n<m){
        for(int i=0;i<n;i++)
        sum+=ary[i];
        x=(abs(n-m))*d;
        printf("%d\n",(sum-x));
    }
    if(n>m)
    {
        for(int i=0;i<m;i++)
        y+=ary[i];
        printf("%d\n",y);
    }

    return 0;
}
