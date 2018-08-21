#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long LL;
// return (a^p)%mod
LL power(LL a, int p, int mod)
{
    LL ret = 1;
    while(p)
    {
        if(p&1)ret = (ret*a)%mod;
        a=(a*a)%mod;
        p/=2;
    }
    return ret;
}
int main()
{
    int t; cin>>t;
    while(t--)
    {
        LL a,d; int p; 
        cin>>a>>d>>p;
        a%=p; d%=p;
        int n;
        if(a==0)
            n=0;
        else if(d==0)
            n=-1;
        else
        {
            LL x = power(d,p-2,p);
            n = (x*(p-a))%p; 
        }
        cout<<n<<endl;
    }
    return 0;
}
