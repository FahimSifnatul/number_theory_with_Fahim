#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll nod[1000003],sod[1000003];

int nod_sod(int n)
{
 for(int i=1;i<=n;i++)
 {
     int len = sqrt(i+1);
     for(int j=1;j<=len;j++)
     {
        if(j == i*i)
        {
            ++nod[i];
            sod[i] += j;
        }
        else if(i%j == 0)
        {
            nod[i]+=2;
            sod[i] += j+i/j;
        }
     }
 }
 return 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    nod_sod(100000);
    //cout<<nod[12]<<' '<<sod[12];
    return 0;
}
