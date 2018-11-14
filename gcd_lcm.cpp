#include<bits/stdc++.h>
using namespace std;
#define x 32
#define y 132
int g,l;

int gcd(int a,int b)
{
    if(b == 0) return a;
    return gcd(b,a%b);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    g = gcd(x,y);
    l = (x*y)/g;
    cout<<g<<' '<<l<<endl;
    return 0;
}









