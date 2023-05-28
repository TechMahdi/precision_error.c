#include<bits/stdc++.h>
using namespace std;
bool perfect (int a)
{
    int root;
    root=sqrt(a);
    return (root*root==a);
}
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,t,result ;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>n;
        if(perfect(n))
        {
            cout<<"Case"<<" "<<i<<":"<<" "<<"YES"<<"\n";
        }
        else{
            cout<<"Case"<<" "<<i<<":"<<" "<<"NO"<<"\n";
        }
    }



    return 0;
}
