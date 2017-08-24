#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,f=0;
    cin >> n;
    int ary[n],a25=0,a50=0;
    for(int i=0; i<n; i++) cin >> ary[i];
    for(int i=0; i<n; i++)
    {
        if(ary[i]==25) a25++;
        else if(ary[i]==50)
        {
            if(a25==0)
            {
                cout << "NO" << endl;
                f=1;
                break;
            }
            a25--;
            a50++;
        }
        else
        {
            if(a25!=0 && a50!=0)
            {
                a25--;
                a50--;
            }
            else if(a25>=3) a25-=3;
            else
            {
                cout << "NO" <<endl;
                f=1;
                break;
            }
        }
    }
    if(!f) cout << "YES" <<endl;

    return 0;
}
