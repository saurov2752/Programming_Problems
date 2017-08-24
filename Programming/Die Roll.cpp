#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int y,w,i;
    cin>>y>>w;
    int x=max(y,w);
    //cout<<x<<endl;
    int z=6-x;
    for(i=6; i>=1; i--)
    {
        if(((z+1)%i==0) &&(6%i==0))
        {
            //cout<<i<<endl;
            //  cout<<(z+1)%i<<"/"<<(6%i)<<endl;
            cout<<(z+1)/i<<"/"<<(6/i)<<endl;
            break;
        }
    }

    return 0;
}
