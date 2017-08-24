#include <iostream>
#include <bits/stdc++.h>
#include <string>

using namespace std;

int main()
{
    int n,c,d,x=0,y=0;
    bool flag=false;
    scanf("%d",&n);
    if(n==2)
    {
        for(int i=0; i<n; i++){
        char ss[n];
        scanf("%s",ss);
        for(int k=0;k<2;k++)
        {
            if(((ss[k]=='x')&&(ss[k+1]=='o')) || ((ss[k]=='o')&&(ss[k+1]=='x'))) flag=true;
            else if(((ss[k]=='x')&&(ss[k+1]!='o')) || ((ss[k]=='o')&&(ss[k+1]!='x'))) flag=false;
        }
        }
        if(flag==true) printf("YES\n");
        if(flag=false) printf("NO\n");
    }

    if(n!=2) {
    for(int i=0; i<n; i++)
    {
        c=0;
        d=0;
        char ss[n];
        scanf("%s",ss);
        for(int j=0; j<n; j++)
        {
            if(ss[j]=='x') c++;
            if(ss[j]=='o') d++;
        }
        if((c%2==0) && (d%2!=0))
        {
            //flag=true;
            x++;
        }
        if(c%2!=0)
        {
            y++;
            //flag=false;
            //break;
        }
    }
    if((x==n) &&(y==0)) printf("YES\n");
    else if((x!=n)&&((y==n) || (y!=n))) printf("NO\n");
    }

    /*int n;
    scanf("%d",&n);
    char a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            //printf("x");
            if()
        }
        printf("\n");
    }*/


    return 0;
}
