#include <iostream>

using namespace std;

int main()
{
    string n;
    int sum = 0,i;

    cout <<"enter the 5 digits number:\n";
    cin >>n;
    for (i=0;i<5;i++){
        int k=n[i];
        sum=sum+k;
    }
    cout<<"The sum of the 5 digit no are:\n"<<sum;
    return 0;
}