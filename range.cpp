#include<iostream>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int a,b,c;
    cin>>a>>b>>c;

    if(a<b && b<c)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }

    return 0;
}
