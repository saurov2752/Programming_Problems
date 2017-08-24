#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <math.h>
#include <algorithm>

using namespace std;

int main()
{
    string str;
    int i,j,c=0;
    getline(cin,str);
    //cout<<str<<endl;
    int len=str.size();
    //cout<<len<<endl;
    if(len<=2){cout<<"0"<<endl;}
    else{
    for(j=1;j<len;j+=3)
    {
        for(i=0;i<j;i++)
        {
            //cout<<str[j]<<" "<<str[i]<<endl;
            if(str[j]==str[i]) break;
             //if(str[j]!=str[i]) c++;
        }
        if(i==j) c++;
    }
    cout<<c;
    }
    return 0;
}
