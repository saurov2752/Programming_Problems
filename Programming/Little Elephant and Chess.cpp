#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    int d=0;
    for(int i=0;i<8;i++)
    {
        cin >> str;
        int c=0;
        for(int j=0;j<7;j++)
        {
            if((str[j]=='B' && str[j+1]=='W') || (str[j]=='W' && str[j+1]=='B')) c++;
        }
        if(c==7) d++;
    }
    if(d==8) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
