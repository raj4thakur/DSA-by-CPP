#include<iostream>
using namespace std;
int main()
{
    int n, i,sum=0,r;
    cout<<"enter the five digit number:\n";
    cin>>n;
    while (n != 0)
    {
        r = n%10;
        sum = sum + r;
        n = n/10;
    }
    
    cout<<"sum: "<<sum;
    return 0;
}
