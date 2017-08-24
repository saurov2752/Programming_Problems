#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n,t,k=0,sum=0;
    cin >> n >> t;
    if(n==1 && t>9)
    {
        cout << "-1" << endl;
        return 0;
    }
    else if(n<10 && t<10)
    {
        for(int i=0;i<n;i++) cout << t;
    }
   else if(n<100 && t>9)
   {
       int x=n/2;
       int y=n%2;
       for(int i=0;i<x;i++) cout << t;
       for(int i=0;i<y;i++) cout << "0";
   }
   else if(t<10 && n>t)
   {
       for(int i=0;i<n;i++) cout << t;
   }
   else if(t==10 && n==100)
   {
       int x=n/2;
       int y=n%2;
       for(int i=0;i<x;i++) cout << t;
       for(int i=0;i<y;i++) cout << "0";
   }
   else
   {
       int x=n/3;
       int y=n%3;
       for(int i=0;i<x;i++) cout << t;
       for(int i=0;i<y;i++) cout << "0";
   }
   cout << endl;
    return 0;
}
