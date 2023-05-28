#include<iostream>
using namespace std;
int divisors(int n)
{
    int count=0;
    for(int j=1;j<=n;j++)
    {
        if(n%j==0)
        {
            count ++;
        }
    }
    return count ;
}
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>n;


    int result =divisors(n);

    cout<<"Case"<<" "<<i<<":"<<" "<<result<<endl;
    }

    return 0;
}
