#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ll test,r=9999999,sum=0;
    cin >> test;
    while(test--)
    {
        ll a,b;
        cin >> a >> b;
        if(b<r) r=b;
        sum+=a*r;
    }
    cout << sum << endl;


    return 0;
}
