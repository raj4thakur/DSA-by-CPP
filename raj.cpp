#include <iostream>
using namespace std;
int main()
{
    int x[]={4,7,32,9,2};
    int i,largest=x[0];
    for (i=0;i<5;i++)
    {if (largest<x[i])
        {largest=x[i]; }}
    cout<<largest;
    return 0;
}