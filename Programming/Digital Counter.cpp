#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int x,y,z=0;
    scanf("%d",&n);
    int a=n/10;
    int b=n%10;
    if(a==0) x=2;
    if(a==1) x=7;
    if(a==2) x=2;
    if(a==3) x=3;
    if(a==4) x=3;
    if(a==5) x=4;
    if(a==6) x=2;
    if(a==7) x=5;
    if(a==8) x=1;
    if(a==9) x=2;
    if(b==0) y=2;
    if(b==1) y=7;
    if(b==2) y=2;
    if(b==3) y=3;
    if(b==4) y=3;
    if(b==5) y=4;
    if(b==6) y=2;
    if(b==7) y=5;
    if(b==8) y=1;
    if(b==9) y=2;
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            z++;
        }
    }
    printf("%d\n",z);
    return 0;
}
