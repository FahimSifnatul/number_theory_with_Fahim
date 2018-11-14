#include<bits/stdc++.h>
using namespace std;

int egcd(int a, int b, int *x, int *y)
{
    if (b == 0)
    {
        *x = 1;
        *y = 0;
        return a;
    }

    int x1, y1;
    int gcd = egcd(b,a%b, &x1, &y1);
    *y = x1 - (a/b) * y1;
    *x = y1;

    return gcd;
}

int main()
{
    ios_base::sync_with_stdio(false);
    int x,y,a,b,g;
    cin>>a>>b;
    g = egcd(a,b,&x,&y);
    cout<<x<<' '<<y<<' '<<g<<endl;
    return 0;
}


// we should use egcd to compute modular multiplicative inverse of a and b.
// x is the mod inverse of a % b and y is the mod inverse of b % a






