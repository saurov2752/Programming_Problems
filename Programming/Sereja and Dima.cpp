#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int ary[1005],n,i,j,x=0,s=0,d=0;
    scanf("%d",&n);
    for(i=0; i<n; i++)
        scanf("%d",&ary[i]);
        i=0;
        j=n-1;
    while(i<=j)
    {
        x++;
        if(ary[i]>ary[j])
        {
            if(x%2!=0)
                s+=ary[i];
            if(x%2==0)
                d+=ary[i];
            i++;
        }
        else if(ary[j]>ary[i])
        {
            if(x%2!=0)
                s+=ary[j];
            if(x%2==0)
                d+=ary[j];
            j--;
        }
        else if(ary[i]==ary[j]){
            if(x%2!=0)
                s+=ary[j];
            if(x%2==0)
                d+=ary[j];
            j--;
        }
        //printf("%d\n",x);

    }
    printf("%d %d\n",s,d);

    return 0;
}
