#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int n;
        cin>>n;
        int rem=n%10;
        while(n>9)
        {
            n=n/10;
        }
        cout<<rem+n<<endl;
    }


    return 0;
}

