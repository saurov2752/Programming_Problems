#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,a[1000],x,y=0,pos;
    cin>>n>>m;
    for(int i=0; i<n; i++)
        cin>>a[i];
    for(int i=0; i<n; i++)
    {
        if(m>=a[i]) continue;
        x=a[i]/m;
        if(a[i]%m!=0) x++;
        if(x>=y)
        {
            pos=i;
            y=x;
        }
    }
    if(y==0) cout<<n<<endl;
    else cout<<pos+1<<endl;

    return 0;
}
