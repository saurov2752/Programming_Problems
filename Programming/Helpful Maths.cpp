#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    char str[105];
    int i,ary[105];
    int k=0,s=0;
    scanf("%s",str);
    int len=strlen(str);
    for(i=0; i<len; i+=2)
    {
        ary[k++]=str[i]-'0';
        s++;
        //printf("%d",ary[k]);
    }
    for(int j=0; j<s; j++)
    {
        //printf(" %d",ary[j]);
        sort(ary,ary+s);
    }
    for(int j=0; j<s; j++)
    {
        if(j==0)
        printf("%d",ary[j]);
        else
            printf("+%d",ary[j]);
    }

    return 0;
}
