#include <bits/stdc++.h>
#define pb push_back
#define sf scanf

using namespace std;

int main()
{
int n;
    sf("%d",&n);
    int ar[n];
    vector <int> my;
    for(int i=0;i<n;i++)
    {
        sf("%d",&ar[i]);
        if(ar[i]) my.pb(i+1);
    }
    int i = 0,ct = 0,f = 0,gogo=0;
    if(!my.size())
    {
        cout << "0" << endl;
        return 0;
    }
    for(int i=my.size()-1;i>0;i--)
    {
        if(my[i]-my[i-1] > 2) ct+=my[i]-my[i-1]-1;
    }
    int ans = my[my.size()-1] - my[0] + 1 - ct;
    //cout << ct << endl;
    cout << ans << endl;

    return 0;
}
