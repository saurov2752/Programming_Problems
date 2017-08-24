#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n;
    cin >> n;
    int f=0;
    while(n)
    {
        ll a=n%10;
        //cout << a << endl;
        n=n/10;
        if(a==4 || a==7)
         f++;

    }
    if(f==0) {cout << "NO" << endl;return 0;}
    else if(f==4 || f==7) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
