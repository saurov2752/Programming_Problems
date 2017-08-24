#include <iostream>
#include <bits/stdc++.h>
#include <math.h>

using namespace std;

int main()
{
    int ary[10][10];
    int i,j,n;
    int a;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            //printf("ary[%d][%d]= %d   ",i,j,ary[i][j]);
            if(i>=0 || j>=0)
            {
                ary[i][j]=1;
            }
            if(i>0 && j>0)
            {
                ary[i][j]=ary[i-1][j]+ary[i][j-1];
                //printf("%d   ",ary[i][j]);

            }
            a=ary[i][j];
            //printf("%d   ",a);
        }
        printf("\n");
    }
    printf("%d   ",a);

    return 0;
}
