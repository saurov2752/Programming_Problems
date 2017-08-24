#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,a,b,c;
    scanf("%d",&n);
    int d=0,x;
    for(int i=0;i<n;i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        x=a+b+c;
        if(x>=2)
        {
            d++;
        }
    }
    printf("%d",d);

    return 0;
}
