#include <bits/stdc++.h>

using namespace std;

int main()
{
    int sum=0,mum=0;
    for(int i=0;i<8;i++)
    {
        char str[1000000];
        cin >> str;
        for(int j=0;j<8;j++)
        {
            if(str[j]=='Q') sum+=9;
            else if(str[j]=='q') mum+=9;
            else if(str[j]=='R') sum+=5;
            else if(str[j]=='r') mum+=5;
            else if(str[j]=='B') sum+=3;
            else if(str[j]=='b') mum+=3;
            else if(str[j]=='N') sum+=3;
            else if(str[j]=='n') mum+=3;
            else if(str[j]=='P') sum+=1;
            else if(str[j]=='p') mum+=1;
        }
    }
    //cout << sum << endl << mum;
    if(sum > mum) cout << "White" << endl;
    else if(mum>sum) cout << "Black" << endl;
    else  cout << "Draw" << endl;


    return 0;
}
