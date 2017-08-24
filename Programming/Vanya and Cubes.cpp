#include <iostream>
#include <bits/stdc++.h>
#include <string.h>

using namespace std;

int main()
{
     //A. Vanya and Cubes
     int n,x=0,c=0,a=0;
     scanf("%d",&n);
     int i=1;
     while(x<=n)
     {
         c++;
         a=i+a;
         x=a+x;
         i++;
     }
     printf("%d\n",--c);

    return 0;
}
