#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int n,five=5,ans = 0;
    cout<<"Enter factorial number: ";
    cin>>n;
    while(n >= five)
    {
      ans += n/five;
      five *= 5;
    }
    cout<<ans<<endl;
    return 0;
}
