#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    char a[105],b[105],x[105],z[105];
    int i,k=0,j,m=0;
    scanf("%s %s",a,b);
    int len=strlen(a);
    for(i=0; i<len; i++)
    {
        if((a[i]>='A' && a[i]<='Z')||(b[i]>='A' && b[i]<='Z'))
        {
            if(a[i]>='A' && a[i]<='Z') x[k]=a[i]+32;
            if (b[i]>='A' && b[i]<='Z')  z[m]=b[i]+32;
        }
        if((a[i]>='a' && a[i]<='z')||(b[i]>='a' && b[i]<='z'))
        {
            if(a[i]>='a' && a[i]<='z')
                x[k]=a[i]+0;
            if (b[i]>='a' && b[i]<='z')
                z[m]=b[i]+0;
        }
        k++;
        m++;
    }
    x[k]='\0';
    z[m]='\0';
    int c=0,d=0;
    bool flag=true;
    for(k=0; k<len; k++)
    {
        //printf("%c",x[k]);
        /*c+=(int) x[k];
        d+=(int)z[k];
        printf("%d %d\n",c,d);*/
        if(x[k]>z[k])
        {
            printf("1");
            flag=false;
            break;
        }
        if(x[k]<z[k])
        {
            printf("-1");
            flag=false;
            break;
        }
    }
    if(flag==true) printf("0");
    return 0;
}
