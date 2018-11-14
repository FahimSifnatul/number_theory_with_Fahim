#include<bits/stdc++.h>
#define ll unsigned long long int
using namespace std;

int POW(int base,int pow,int ans)
{
 if(pow == 0) return ans;
 ans *= base;
 POW(base,pow-1,ans);
}

int power_set(char c[],int n)
{
    int p = POW(2,n,1);
    for(int i=0;i<p;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i&(1<<j))
                cout<<c[j];
        }
        cout<<endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    char c[]={'a','b','c'};
    power_set(c,3);
    return 0;
}

// time complexity O(2^n)



