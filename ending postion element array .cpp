#include<bits/stdc++.h>
using namespace std;
int main(void)
{
 int size,item;
 cout<<"enter the size of array ";
 cin>>size;

 int arr[size];
 cout<<"enter the array elements :";
 for(int i=0;i<size;i++)
 {
     cin>>arr[i];
 }
 cout<<"enter the item ";
 cin>>item;
 size+=1;
 arr[size-1]=item;
 for(int i=0;i<size;i++)
 {
     cout<<arr[i]<<" ";
 }


}
