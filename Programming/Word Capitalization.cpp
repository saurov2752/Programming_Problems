#include <iostream>
#include <bits/stdc++.h>
#include <string>

using namespace std;

int main()
{
    char str[1005];
    scanf("%s",str);
    int len=strlen(str);
    for(int i=0; i<len; i++)
    {
        if(i==0 && str[i]>='a' && str[i]<='z')
            printf("%c",str[i]-32);

        else if(i==0 && str[i]>='A' && str[i]<='Z')
            printf("%c",str[i]);
        else printf("%c",str[i]);
    }

    return 0;
}
