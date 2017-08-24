#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    int c=1;
    while((cin >> str))
    {
        //c++;
//        cin >> str;
        if (str=="#") break;
        else if(str=="HELLO") cout << "Case " << c++ << ": " << "ENGLISH" << endl;
        else if(str=="HOLA") cout << "Case " << c++ << ": " << "SPANISH" << endl;
        else if(str=="HALLO") cout << "Case " << c++ << ": " << "GERMAN" << endl;
        else if(str=="BONJOUR") cout << "Case " << c++ << ": " << "FRENCH" << endl;
        else if(str=="CIAO") cout << "Case " << c++ << ": " << "ITALIAN" << endl;
        else if(str=="ZDRAVSTVUJTE") cout << "Case " << c++ << ": " << "RUSSIAN" << endl;
        else cout << "Case " << c++ << ": " << "UNKNOWN" << endl;
    }

    return 0;
}
