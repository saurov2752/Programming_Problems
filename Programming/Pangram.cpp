#include <bits/stdc++.h>

using namespace std;

int main()
{
    int nn,a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,ii=0,j=0,k=0,l=0,m=0,n=0,o=0,p=0,
           q=0,r=0,s=0,t=0,u=0,v=0,w=0,x=0,y=0,z=0;;
    cin >> nn ;
    char str[150];
    cin >> str;
    int len=strlen(str);
    for(int i=0; i<len; i++)
    {
        if(str[i]=='a' || str[i]=='A') a++;
        else if(str[i]=='b' || str[i]=='B') b++;
        else if(str[i]=='c' || str[i]=='C')
        {
            c++; //cout << "c" << endl;
        }
        else if(str[i]=='d' || str[i]=='D') d++;
        else if(str[i]=='e' || str[i]=='E') e++;
        else if(str[i]=='f' || str[i]=='F') f++;
        else if(str[i]=='g' || str[i]=='G') g++;
        else if(str[i]=='h' || str[i]=='H') h++;
        else if(str[i]=='i' || str[i]=='I')
        {
            ii++; //cout << "i" << endl;
        }
        else if(str[i]=='j' || str[i]=='J') j++;
        else if(str[i]=='k' || str[i]=='K') k++;
        else if(str[i]=='l' || str[i]=='L') l++;
        else if(str[i]=='m' || str[i]=='M') m++;
        else if(str[i]=='n' || str[i]=='N') n++;
        else if(str[i]=='o' || str[i]=='O') o++;
        else if(str[i]=='p' || str[i]=='P') p++;
        else if(str[i]=='q' || str[i]=='Q') q++;
        else if(str[i]=='r' || str[i]=='R') r++;
        else if(str[i]=='s' || str[i]=='S') s++;
        else if(str[i]=='t' || str[i]=='T') t++;
        else if(str[i]=='u' || str[i]=='U') u++;
        else if(str[i]=='v' || str[i]=='V') v++;
        else if(str[i]=='w' || str[i]=='W') w++;
        else if(str[i]=='x' || str[i]=='X') x++;
        else if(str[i]=='y' || str[i]=='Y') y++;
        else if(str[i]=='z' || str[i]=='Z') z++;
    }
    if(a!=0 && b!=0 && c!=0 && d!=0 && e!=0 && f!=0 && g!=0 && h!=0 && ii!=0 && j!=0 && k!=0 && l!=0
            && m!=0 && n!=0 && o!=0 && p!=0 && q!=0 && r!=0 && s!=0 && t!=0 && u!=0 && v!=0 && w!=0
            && x!=0 && y!=0 && z!=0) cout << "YES" << endl;
    else cout << "NO" << endl;
//    cout << a << endl;
//    cout << b << endl;
//    cout << c << endl;
//    cout << d << endl;
//    cout << e << endl;
//    cout << f << endl;
//    cout << g << endl;
//    cout << h << endl;
//    cout << i << endl;
//    cout << j << endl;
//    cout << k << endl;
//    cout << l << endl;
//    cout << m << endl;
//    cout << n << endl;
//    cout << o << endl;
//    cout << p << endl;
//    cout << q << endl;
//    cout << r << endl;
//    cout << s << endl;
//    cout << t << endl;
//    cout << u << endl;
//    cout << v << endl;
//    cout << w << endl;
//    cout << x << endl;
//    cout << y << endl;
//    cout << z << endl;
    return 0;
}
