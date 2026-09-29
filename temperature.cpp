#include<iostream>
using namespace std;
int  main()
{
    float tem;
    float cel;
    cout<<"enter the temperature in ferenheat:\n";
    cin>>tem;
    cel=(5*(tem-32))/9;
    cout<<"temperature in celcius:\n"<<cel;

    return 0;
}