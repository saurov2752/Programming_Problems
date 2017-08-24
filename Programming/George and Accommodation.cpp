#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,p,q,c=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&p,&q);
        if(p+2<=q)
        {
            c++;
        }
    }
printf("%d\n",c);
    return 0;
}
