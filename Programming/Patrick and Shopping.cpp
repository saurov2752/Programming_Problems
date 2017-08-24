#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll a,b,c,ary[100],x=0;
    cin >> a >> b >> c;
    ll d=a+b+c;
    ary[x++]=d;
    ll e=a+a+b+b;
    ary[x++]=e;
    ll f=a+c+c+a;
    ary[x++]=f;
    ll g=b+c+c+b;
    ary[x++]=g;
    sort(ary,ary+x);
    cout << ary[0] << endl;

    return 0;
}
