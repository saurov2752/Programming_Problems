#include <iostream>
#include <bits/stdc++.h>
#include <string.h>

using namespace std;

int main()
{
    int c,a,k=0;
    scanf("%d",&c);
    bool flag=false;
    for(int i=1; i<=20; i++)  /*20 Or 1000000000*/
    {
        int n=c+i;
        while(n!=0)
        {
            a=n%10;
            if(a==8 || a==-8)
            {
                printf("%d\n",i);
                flag=true;
                break;
            }
            //printf("%d",a);
            n=n/10;
        }
        if(flag==true) break;
    }

    return 0;
}
