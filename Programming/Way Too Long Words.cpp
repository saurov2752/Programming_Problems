#include <iostream>
#include <bits/stdc++.h>
#include <string>

using namespace std;

int main()
{
    char str[105];
    int n,len;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%s",str);
        len=strlen(str);
        if(len<=10)
        {
            for(int j=0; j<len; j++)
            {
                printf("%c",str[j]);
            }
        }
        if(len>10)
        {
            for(int j=0; j<len; j++)
            {
                printf("%c",str[0]);
                printf("%d",(len-2));
                printf("%c",str[len-1]);
                break;
            }
        }
        printf("\n");
    }

    return 0;
}
