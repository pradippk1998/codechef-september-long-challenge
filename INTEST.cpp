#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,k,ans=0;
    cin>>n>>k;
    while(n--)
    {
        int temp;
        cin>>temp;
        if(temp%k==0)
        {
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}