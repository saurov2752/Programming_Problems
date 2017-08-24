#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <math.h>

using namespace std;

int main()
{
    int n,i,j,ary[2005],aa[2005],a[2005],k=0;
    cin>>n;
    for(i=0; i<n; i++) {cin>>ary[i]; a[i]=ary[i];}
    sort(ary,ary+n);
    for(i=n-1; i>=0; i--)
    {
        aa[k++]=ary[i];

    }
   // for(i=0; i<n; i++)
     //cout<<a[i]<<" ";
     //cout<<endl;

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]==aa[j]) {cout<<j+1<<" "; break;}
        }
    }


    return 0;
}
