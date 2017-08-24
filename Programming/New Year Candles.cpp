#include <iostream>
#include <bits/stdc++.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int a,b,x,n;
    while(scanf("%d %d",&a,&b)==2)
    {
        x=a;
        while(a>=b)
        {
            x=x+a/b;
            a=(a%b)+(a/b);
        }
        printf("%d\n",x);
    }

    return 0;
}
