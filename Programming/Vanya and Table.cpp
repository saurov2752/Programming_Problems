#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,a,b,c,d,x;
    cin >> n;
    int v=0;
    for(int i=0;i<n;i++)
    {
        cin >> a >> b >> c >> d;
        x=(abs(a-c)+1)*(abs(b-d)+1);
        //x=abs(((a-c)+1)*((b-d)+1));
        v+=x;

    }
cout << v << endl;
//x=((a-c)+1)*((b-d)+1);

    return 0;
}
