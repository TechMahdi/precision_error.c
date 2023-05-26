#include<iostream>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,c,num;
    //cin>>a>>b>>c;
    cin>>num;
    a =num%10;
    num /=10;
    b=num%10;
    num/=10;
    c=num%10;
    num/=10;
   int num1=a*100+b*10+c;
    int num2=b*100+c*10+a;
     int num3=c*100+a*10+b;
   int  sum =num1+num2+num3;
    cout <<sum<<endl;


    return 0;
}
