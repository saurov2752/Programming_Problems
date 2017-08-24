#include <bits/stdc++.h>

using namespace std;

int main()
{
//    int m1,m2,m3,m4,m5,w1,w2,w3,w4,w5,hs,hu;
//    cin >> m1 >> m2 >> m3 >> m4 >> m5 >> w1 >> w2 >> w3 >> w4 >> w5 >> hs >> hu;
    double m[100],w[100],hs,hu,x=0,sum=0;
    for(int i=0;i<5;i++) cin >> m[i];
    for(int i=0;i<5;i++) cin >> w[i];
    cin >> hs >> hu;
    for(int i=0;i<5;i++)
    {
        //sum=0;
        x+=500;
        double z=1-(m[i]/250);
        double y=((z*x)-(50*w[i]));
        double u=0.3*x;
        double v=max(u,y);
        sum+=v;
        //cout << sum << endl;
    }
    sum+=(hs*100);
    sum-=(hu*50);
    cout << sum << endl;
    //printf("%lf\n",sum);
    return 0;
}
