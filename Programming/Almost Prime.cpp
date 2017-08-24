#include <iostream>
#include <bits/stdc++.h>
#include <math.h>

using namespace std;
int ary[3005];

int main()
{
    int n,i,j,k=0,c=0,aa[3005];
    scanf("%d",&n);
    for(i=3; i<sqrt(n); i+=2)
    {
        if(ary[i]==0)
        {
            for(j=i*i; j<=n; j+=i)
                ary[j]=1;
        }
    }
    for(i=3; i<=n; i+=2)
    {
        if(ary[i]==0)
        {
            c++;
            aa[k++]=i;
        }
    }
    /* for(i=0;i<c;i++)
         printf("%d ",aa[i]);
     printf("\n\n");*/
    int z,x=0;
    for(i=6; i<=n; i++)
    {
        z=0;
        if(i%2==0)
        {
            for(j=0; j<c; j++)
            {
                if((i%aa[j])==0)
                    z++;
            }
            if(z==1)
                x++;
        }
        if(i%2!=0)
        {
            for(j=0; j<c; j++)
            {
                if((i%aa[j])==0)
                    z++;
            }
            if(z==2)
                x++;
        }
    }
    printf("%d",x);

    return 0;
}
