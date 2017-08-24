#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <math.h>

using namespace std;

int main()
{
    int n,m;
    int i,j,k;
    while(scanf("%d %d",&n,&m)==2)
    {
        for(i=0; i<n; i++)
        {
            if(i%2==0)
            {
                for(k=0; k<m; k++)
                {
                    if(k==m) continue;
                    printf("#");
                }
            }
            if(i==1||i==5||i==9||i==13||i==17||i==21||i==25||i==29||
                    i==33||i==37||i==41||i==45||i==49)
            {
                for(k=0; k<m; k++)
                {

                    if(k==(m-1))
                    {
                        printf("#");
                        continue;
                    }
                    printf(".");
                }
            }
            if(i==3||i==7||i==11||i==15||i==19||i==23||i==27||i==31||
                    i==35||i==39||i==43||i==47)
            {
                for(k=0; k<m; k++)
                {
                    if(k==0)
                    {
                        printf("#");
                    }
                    else printf(".");
                }
            }
            printf("\n");
        }
    }

    return 0;
}
