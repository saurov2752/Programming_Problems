#include <iostream>
#include <bits/stdc++.h>
#include <string>

using namespace std;

int main()
{
    string str;
    int i;
    getline(cin,str);
    int len=str.size();
    for(i=0;i<len;i++)
    {
        if(str[i]=='H' || str[i]=='Q' || str[i]=='9')
        {
            cout<<"YES"<<endl;
            break;
        }
    }
    if(i==len) cout<<"NO"<<endl;

    return 0;
}
