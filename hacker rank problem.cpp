#include<bits/stdc++.h>
using namespace std;
#define fastread ios_base::sync_with_stdio(false)
int main ()
{
    fastread;
    cin.tie(NULL);
    cout.tie(NULL);
    long long int n;
    cin>>n;
    long long arr[n];

    for(long long i =0;i<n;i++)
    {
        cin>>arr[i];
    }
   // sort(arr, arr+n);
      long long  int max =arr[0],c=0;

       for(long long i =1;i<n;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
       for(long long i =1;i<n;i++)
    {
        if(max==arr[i])
        {
            c++;
        }
    }
    cout<<c;


    return 0;
}
