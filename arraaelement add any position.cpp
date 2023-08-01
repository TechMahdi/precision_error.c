#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int size,pos,item;
    cout<<" enter the size of array : "<<endl;
    cin>>size;
    int arr[size];
    cout<<"enter the array elements "<<endl;
    for(int i=0 ; i<size ; i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the position which you want to add elemnets :"<<endl;
    cin>>pos;
    cout<<"enter the item you want to add "<<endl;
    cin>>item;
    for(int i=size;i>=pos;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[pos]=item;
    size++;
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }


    return 0;
}
