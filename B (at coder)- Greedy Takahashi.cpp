#include<iostream>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long t ,a,k;
    cin>>t>>a>>k;
    if(t+a<=k)
        cout<<0<<" "<<0<<"\n";
    else if(t>=k)
        cout<<t-k<<" "<<a<<"\n";
    else
        cout<<0<<" "<<a-(k-t)<<"\n";
    return 0;
}
