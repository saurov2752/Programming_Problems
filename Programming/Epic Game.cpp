#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,n;
    cin >> a >> b >> n;
    int c=0;
    while(n)
    {
        c++;
        if(c%2==0)
        {
            int r=__gcd(b,n);
            //b+=r;
            n-=r;
        }
        else
        {
            int r=__gcd(a,n);
           // a+=r;
            n-=r;
        }
        //cout << a << " " << b << " " << n << " " << c <<  endl;

    }
    if(c%2==0) cout << "1" << endl;
    else cout << "0" << endl;


    return 0;
}
