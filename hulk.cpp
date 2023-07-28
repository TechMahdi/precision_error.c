#include<bits/stdc++.h>
using namespace std;
void solve(int n)
{
    for(int i=1;i<=n;i++)
    {
        if(i==1 )
        {
            cout<<"I hate"<<" ";
        }
        else if(i%2==1)
        {
            cout<<" that I hate";
        }
        else if(i%2==0)
        {
            cout<<" that I love";
        }
    }
    cout<<" it"<<" ";
}
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
     solve( n);


    return 0;
}
