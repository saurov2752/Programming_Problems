#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c=0;
    cin >> a >> b;
    if(a==1 && b==1)
    {
        cout << "0" << endl;
        return 0;
    }
    while(a && b)
    {
        if(a>b) swap(a,b);
        a+=1;
        b-=2;
        c++;
    }
    cout << c << endl;
    return 0;
}
