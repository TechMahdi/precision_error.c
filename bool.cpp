#include<iostream>
using namespace std;
bool mahdi (int a,int b)
{
    return (a==b);
}
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,result ;
    cin>>a>>b;
    result =mahdi(a,b);
    cout<<result ;

    return 0;
}
