#include <iostream>
#include <bits/stdc++.h>
#include <string>

using namespace std;

int main()
{
    char str[105];
    scanf("%s",str);
    bool flag=false;
    int j,k,m,n,len=strlen(str);
    for(int i=0; i<len; i++)
    {
        if(str[i]=='h')
        {
            //j=i;
            for(j=i+1;j<len;j++)
            {
                if(str[j]=='e')
                {
                    //int k=j;
                    for(k=j+1;k<len;k++)
                    {
                        if(str[k]=='l')
                        {
                            //int m=k;
                            for(m=k+1;m<len;m++)
                            {
                                if(str[m]=='l')
                                {
                                    //int n=m;
                                    for(n=m+1;n<len;n++)
                                    {
                                        if(str[n]=='o')
                                            flag=true;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if(flag==true) printf("YES\n");
    else if(flag==false) printf("NO\n");
    return 0;
}
