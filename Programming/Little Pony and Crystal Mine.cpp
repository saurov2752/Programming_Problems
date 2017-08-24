#include <iostream>
#include <bits/stdc++.h>
#include <string>

using namespace std;

int main()
{
    int a,b,n,x;
    scanf("%d",&n);
    b=(n+1)/2;
    for(int i=1; i<=b; i++)
    {
        for(int j=i; j<b; j++)

            printf("*");

        for(int k=1; k<=(2*i)-1; k++)
        {
            printf("D");
        }
        for(int c=i; c<b; c++)
            printf("*");

        printf("\n");
    }

    for(int i=n-b; i>=1; i--)
    {
        for(int k=i; k<=n-b; k++) printf("*");
        for(int j=1; j<=2*i-1; j++) printf("D");
        for(int c=i; c<=n-b; c++) printf("*");
        printf("\n");
    }

    return 0;
}
