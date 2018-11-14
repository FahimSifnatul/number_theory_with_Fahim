#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int n;
    double ans=0.00;
    cout<<"Enter factorial number: ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
       ans += log10(i);
    }
    ++ans;
    cout<<(int)ans<<endl;
    return 0;
}

