#include<bits/stdc++.h>
using namespace std;
int binarysearch(int arr[],int n,int key)
{
    int s=0,e=n;
    while(s<=e){
        int mid =(s+e)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(key>arr[mid])
        {
            s=mid+1;
        }
        else if(key<arr[mid]) {
                e=mid-1;

        }
    }
    return -1;
}
int main ()
{
   int n;
   cin>>n;
   int arr[n];
   int key ;
   cin>>key;
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];

   }
  cout<< binarysearch(arr,n,key);
}
