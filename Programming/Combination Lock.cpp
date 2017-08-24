#include <iostream>
#include <bits/stdc++.h>
#include <string>

using namespace std;

int main()
{
    char aa[1005],bb[1005];
    int n;
    cin >> n;
    getchar();
    gets(aa);
    gets(bb);
    //cout << n << " " << aa << " " << bb << endl;
    int len,x,y,s,d,sum=0;
    len=strlen(aa);

    for(int i=0; i<len; i++)
    {
        //sum=0;
        s=aa[i]-'0';
        d=bb[i]-'0';
        x=abs(s-d);
        if(s>d)
        {
            y=((10+d)-s);
            if(x>y)
                sum+=y;
            else sum+=x;
        }
        if(d>s)
        {
            y=((10+s)-d);
            if(x>y)
                sum+=y;
            else sum+=x;
        }
        //printf("%d ",sum);
    }
    printf("%d",sum);

    return 0;
}
