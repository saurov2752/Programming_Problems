#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long test,a,b;
    cin >> test;
    while(test--)
    {
        cin >> a >> b;
        if(a>b) cout << ">" << endl;
        else if(a<b) cout << "<" << endl;
        else cout << "=" << endl;
    }


    return 0;
}
