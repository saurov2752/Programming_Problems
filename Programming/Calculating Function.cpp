#include <iostream>
#include <bits/stdc++.h>
#include <math.h>

using namespace std;

int main()
{
    long long n,i;
    while(scanf("%lld",&n)==1)
    {
        if((n%2)==0)
        {
            //long long a=0.5*n*(n+1);
            //printf("%lld\n",(a/n));
            n= (n/2);
            printf("%lld\n",n);

        }
        else if((n%2)!=0)
        {

            //long long a=0.5*n*(n+1);
             //printf("-%lld\n",(a/n));
             n = ((n+1)/2)*(-1);
            printf("%lld\n",n);

        }
    }

    return 0;
}
