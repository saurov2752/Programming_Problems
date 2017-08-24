#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll a,b,cut=0;
    cin >> a >> b;
//    a/=4;
//    b/=4;
    //ll sum=a-b;
    while(a>0 && b>0)
    {
        if(a>=b)
        {
            cut+=(a/b);
            a%=b;
        }
        else
        {
            cut+=(b/a);
            b%=a;
        }
    }
    cout << cut << endl;

    return 0;
}
