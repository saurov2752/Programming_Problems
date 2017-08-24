#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,a,b;
    scanf("%d %d %d %d",&n,&m,&a,&b);
    if(n<m && (n*a)>b)
    {
        printf("%d\n",b);
        return 0;
    }
    int x=n*a;
    int y=(((n/m)*b)+((n%m)*a));
    int c=(((n/m)+1)*b);
    if(x==y)
    {
        printf("%d\n",x);
    }
    else
    {
        int z=min(x,y);
        int v=min(z,c);
        printf("%d\n",v);
    }


    return 0;
}
