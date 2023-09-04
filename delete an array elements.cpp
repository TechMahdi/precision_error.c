#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int n,pos;
    cin>>n;

    cin>>pos;
    int arr[n];
    for(int i=0;i<n;i++)
    {

        cin>>arr[i];
    }
    for(int i=pos-1;i<n;i++)
    {
        arr[i]=arr[i+1];
    }
    arr[n-1]=0;
    for(int i=0;i<n;i++)
    {

        cout<<arr[i]<<" ";
    }

    return 0;
}
