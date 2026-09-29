#include<iostream>
using namespace std;
int main(){
    int r,p,c;
    cout<<"enter the first number\n";
    cin>>r;
    cout<<"enter the second number\n";
    cin>>p;
    c=r;
    r=p;
    p=c;
cout<<"first number: "<<r<<"\n";
cout<<"second number: "<<p;
return 0;
}