#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int k;
    cin>>k;
   int arr[k];
   int sum=0;
arr[0]=0;
arr[1]=1;

   for(int i=2;i<=k;i++)
   {
       arr[i]=arr[i-1]+arr[i-2];
   }
   for(int i=0;i<=k;i++)
   {
       sum+=arr[i];
   }
cout<<sum;
    return 0;
}
