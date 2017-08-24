#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    bool flag=false;
    int x,ary[100100],aa[100100],k=0,l=0;
    cin >> str;
    int len=str.size();
    //cout << len;
    for(int i=0; i<len-1; i++)
    {
        if(str[i]=='A' && str[i+1]=='B') ary[k++]=i;
        else if(str[i]=='B' && str[i+1]=='A') aa[l++]=i;
    }
    for(int i=0; i<k; i++)
    {
        for(int j=0; j<l; j++)
        {
            x=abs(ary[i]-aa[j]);
            if(x>=2)
            {
                flag=true;
                break;
            }
        }
        if(flag==true) break;
    }
    if(flag==true) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
