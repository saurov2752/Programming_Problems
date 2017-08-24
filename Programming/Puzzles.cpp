y
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,ary[1010],z=10000,y,c=0;
    cin >> n >> m;
    for(int i=0; i<m; i++) cin >> ary[i];
    sort(ary,ary+m);
    int f=(m-n)+1;
    for(int j=0;j<m; j++)
    {
        c++;
        int x=abs(ary[j]-ary[j+(n-1)]);
        //cout << x << endl;
        y=min(x,z);
        z=y;
        if(c==f) break;
    }
    cout << y << endl;
    return 0;
}
