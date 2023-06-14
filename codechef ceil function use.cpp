#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        double n,x;
        cin>>n>>x;
        cout<<ceil (n/6)*x<<endl;
    }


    return 0;
}

