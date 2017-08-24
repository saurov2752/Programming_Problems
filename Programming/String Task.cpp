#include <iostream>
#include <bits/stdc++.h>
#include <string>

using namespace std;

int main()
{
    char str[1000];
    int i;
    scanf("%s",str);
    int len=strlen(str);
    for(i=0; i<len; i++)
    {
        if(str[i]=='B' ||str[i]=='C' ||str[i]=='D' ||str[i]=='F' ||str[i]=='G' ||str[i]=='H' ||
                str[i]=='J' ||str[i]=='K' ||str[i]=='L' ||str[i]=='M' ||str[i]=='N' ||str[i]=='P' ||
                str[i]=='Q' ||str[i]=='R' ||str[i]=='S' ||str[i]=='T' ||str[i]=='V' ||str[i]=='W' ||
                str[i]=='X' ||str[i]=='Z'||str[i]=='b' ||str[i]=='c' ||str[i]=='d' ||str[i]=='f' ||
                str[i]=='g' ||str[i]=='h' ||
                str[i]=='j' ||str[i]=='k' ||str[i]=='l' ||str[i]=='m' ||str[i]=='n' ||str[i]=='p' ||
                str[i]=='q' ||str[i]=='r' ||str[i]=='s' ||str[i]=='t' ||str[i]=='v' ||str[i]=='w' ||
                str[i]=='x' ||str[i]=='z')
        {
            printf(".");
            //printf("%c",str[i]);
            if(str[i]=='B' ||str[i]=='C' ||str[i]=='D' ||str[i]=='F' ||str[i]=='G' ||str[i]=='H' ||
                    str[i]=='J' ||str[i]=='K' ||str[i]=='L' ||str[i]=='M' ||str[i]=='N' ||str[i]=='P' ||
                    str[i]=='Q' ||str[i]=='R' ||str[i]=='S' ||str[i]=='T' ||str[i]=='V' ||str[i]=='W' ||
                    str[i]=='X' ||str[i]=='Z')
                printf("%c",str[i]+32);
            else
            {
                printf("%c",str[i]);
            }

        }
    }

    return 0;
}
