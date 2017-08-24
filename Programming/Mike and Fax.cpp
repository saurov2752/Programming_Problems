#include <iostream>
#include <bits/stdc++.h>
#include <string>

using namespace std;

int main()
{
    int a,b,i,j,k,c=0;

    string str;
    cin>>str;
    cin>>a;
    //cout<<str;
    int len=str.size();
    //cout<<len<<endl;
    if(len%a!=0) cout<<"NO"<<endl;
    else
    {
        b=len/a;
        for(i=0; i<len; i+=b)
        {
            for(j=i,k=((i+b)-1); j<i+b; j++,k--)
            {
                if(str[j]!=str[k]) break;
            }
            if(j==i+b) c++;
        }
        if(c==a) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
