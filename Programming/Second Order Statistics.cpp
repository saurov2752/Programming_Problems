#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main()
{
    int n,i,ary[105];
    cin>>n;
    for(i=0;i<n;i++) cin>>ary[i];
    sort(ary,ary+n);
    //for(i=0;i<n;i++) cout<<ary[i];
    for(i=0;i<n-1;i++)
    {
        if(ary[0]!=ary[i+1])
        {
            cout<<ary[i+1]<<endl;
            break;
        }
    }
    if(i==n-1) cout<<"NO"<<endl;

    return 0;
}
