#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <math.h>

using namespace std;

int main()
{
    int n,i,c=0,d=0;
    scanf("%d",&n);
    getchar();
    char str[205];
    //scanf("%s",str);
    for(i=0;i<=n;i++)
    {
        scanf("%c",&str[i]);
    }
    str[i]='\0';
    for(i=0;i<=n;i++)
    {
        if(str[i]=='x') c++;
        if(str[i]=='X') d++;
    }
    //printf("%d %d",c,d);
    int a=0;
    if(c==d)
    {
        printf("%d\n",a);
        printf("%s",str);
    }
    if(c>d)
    {
        int x=abs(c-(n/2));
        printf("%d\n",x);
        for(i=0;i<n;i++)
        {
            if(str[i]=='X') printf("X");
            if(str[i]=='x')
            {
                a++;
                if(a<=(n/2)) printf("x");
                if(a>(n/2)) printf("X");
            }
        }
    }
    if(c<d)
    {
        int x=abs(c-(n/2));
        printf("%d\n",x);
        for(i=0;i<n;i++)
        {
            if(str[i]=='x') printf("x");
            if(str[i]=='X')
            {
                a++;
                if(a<=(n/2)) printf("X");
                if(a>(n/2)) printf("x");
            }
        }
    }



    return 0;
}
