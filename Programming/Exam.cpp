#include <bits/stdc++.h>
#define pb push_back
using namespace std;

int main()
{
    int n;
    cin >> n;
    if(n<=4)
    {
        if(n==1)
        {
            cout << n <<endl;
            cout << n <<endl;
        }
        else if(n==2)
        {
            cout << "1" <<endl;
            cout << "1" <<endl;
        }
        else if(n==3)
        {
            cout << "2" <<endl;
            cout << "1 3" <<endl;
        }
        else if(n==4)
        {
            cout << "4" << endl;
            cout << "3 1 4 2" << endl;
        }
    }
    else
    {
        cout << n << endl;
        for(int i=1;i<=n;i+=2) cout << i << " ";
        for(int i=2;i<=n;i+=2) cout << i << " ";
        cout << endl;
    }
    return 0;
}
