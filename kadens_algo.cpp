//* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ ///*/
#include<bits/stdc++.h>
const int mx = 1e5+123;
#define mem(a, b) memset(a, b, sizeof(a) );
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define fraction() cout.unsetf( ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
using namespace std;
int_fast32_t main ()
{
    //kadens algorithom for maximum subarray
optimize();
int n;
cin>>n;
int arr[n+3];
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
int sum=0;
int mx=INT_MIN;
for(int i=0;i<n;i++)
{
    sum+=arr[i];
    mx=max(mx,sum);
    if(sum<0)
    {
       sum=0;
    }
}

cout<<mx<<endl;

return 0;
}
