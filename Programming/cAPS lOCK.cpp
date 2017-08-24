#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    char str[105];
    int i,a=0;
    scanf("%s",str);
    int len=strlen(str);
    for(i=0; i<len; i++)
    {
        if(str[i]<=90) a++;
    }
    if(str[0]>96 && a==len-1)
    {
        printf("%c", str[0]-32);
        for(int i=1; i<strlen(str); i++) printf("%c", str[i]+32);
    }
    else if(a==len)
    {
        for(int j=0; j<len; j++)
            printf("%c",str[j]+32);
    }
    else printf("%s",str);
    return 0;
}
