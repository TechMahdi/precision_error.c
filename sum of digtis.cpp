#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,r,sum=0;
    cin>>n;
    while(n>0){
        r=n%10;
        sum =sum+r;
        n=n/10;
    }
    cout<<sum<<endl;

    return 0;
}
