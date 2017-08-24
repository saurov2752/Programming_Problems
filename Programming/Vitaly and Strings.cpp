#include <iostream>
#include <bits/stdc++.h>
#include <string.h>

using namespace std;

int main()
{
    char s[1000],t[1000];
     while(scanf("%s %s", s, t) != EOF) {
        int up, i, len = strlen(s);
        for(i = 0; i < len; i++) {
            if(s[i] != t[i]) break;
        }

        s[len - 1]++;
        if(s[len - 1] - 'z' == 1) {up = 1; s[len - 1] = 'a'; }
        else up = 0;
        for(int j = len - 2; j >= 0; j--) {
            s[j]+=up;
            if(s[j] - 'z' == 1) {up = 1; s[j] = 'a'; }
            else up = 0;
        }

        if(strcmp(s, t) == 0) printf("No such string\n");
        else printf("%s\n", s);
     }


    /*char a[1000],b[1000];
    int i,n[1000];
    int x=0,y=0,z=0;
    bool flag=false;
    scanf("%s %s",a,b);
        int len=strlen(a);
        for(i=0; i<len; i++)
        {
            n[i]=((int)a[i]+(int)b[i])/2;
        }
        for(i=0; i<len; i++)
        {
            x+=(int)a[i];
            y+=(int)b[i];
            z+=n[i];

        }
        if((z>x && z<y)||(z<x && z>y))
        {
             for(i=0; i<len; i++)
            {
                 if(n[i]<(int)a[i])
                {
                    //int q=a[i]-n[i];
                    int m=n[i]+4;
                    printf("%c",m);
                }
                else printf("%c",n[i]);
            }
        }
            else printf("No such string");*/
    return 0;
}
