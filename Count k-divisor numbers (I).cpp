#include<iostream>
using namespace std;
int count_divisors(int num)
{
    int count =0;
    for (int k=1;k<=num;k++)
    {
        if(num%k==0)
            count++;
    }
    return count ;

}
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int l,r,k,t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>l>>r>>k;
        int freq=0;
        for(int j=l;j<=r;j++)
        {
            int divisors=count_divisors(j);
            if(divisors==k)
            {
                freq++;
            }
        }
        cout<<"Case"<<" "<<i<<":"<<" "<<freq<<endl;
    }


    return 0;
}
