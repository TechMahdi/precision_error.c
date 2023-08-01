#include<bits/stdc++.h>
using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
  int arr[100];
  for(int i=0;i<5;i++)
  {
      cin>>arr[i];
  }
  for(int i=0;i<5;i++)
  {
      for(int j=i+1;j<5;j++)
      {
          if(arr[i]>arr[j])
             {
                 swap(arr[i],arr[j]);
             }
      }
  }
  for(int i=0;i<5;i++)
  {
      cout<<arr[i]<<" ";
  }


    return 0;
}
