#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
#include <algorithm>

using namespace std;

int main()
{
    int a,b,c,d;
    while(scanf("%d %d %d %d",&a,&b,&c,&d)==4){
    int m=(3*a)/10;
    int x=a-(a/250)*c;
    int maxi1=max(m,x);
    //printf("%d  %d\n",x,m);
    //printf("%d\n",maxi1);
    int n=(3*b)/10;
    int y=b-(b/250)*d;
    int maxi2=max(n,y);
    //printf("%d  %d\n",y,n);
    //printf("%d\n",maxi2);
    if(maxi1>maxi2) printf("Misha\n");
    else if(maxi1<maxi2) printf("Vasya\n");
    else printf("Tie\n");}

    /*if(x==y || m==n) {printf("Tie\n"); continue;}
    if((x>y && m>n)||(x>y && m==n)) printf("Misha\n");
    else if((x<y && m<n)||(x<y && m==n)) printf("Vasya\n");
    else printf("Tie\n");
    }*/

    return 0;
}
