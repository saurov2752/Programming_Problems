#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int w;
    cin>>w;
    if((w==0) || (w==2))
    {
        cout<<"NO"<<endl;
        return 0;
    }
    if(w%2==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}