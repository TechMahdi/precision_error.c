#include<bits/stdc++.h>
using namespace std;
int  main (void )
{
    int n,item;
    cout<<"enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"enter array elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the item you want to add to array begining index ";
    cin>>item;
    n++;//incresing array size
    for(int i=n;i>1;i--)
    {
        arr[i-1]=arr[i-2];

    }
    arr[0]=item;
    cout<<"printing array elements : ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }


}
