#include <iostream>
#include <bits/stdc++.h>
#include <string>

using namespace std;

int main()
{
    double a,b,c=0,d=0,a1,a2,a3,b1,b2,b3,n;
    cin>>a1>>a2>>a3>>b1>>b2>>b3>>n;
    a=a1+a2+a3;
    b=b1+b2+b3;
    a=ceil(a/5);
    b=ceil(b/10);
    if(n>=a+b) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
