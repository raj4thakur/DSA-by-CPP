#include<iostream>
using namespace std;
int main(){
int r,v,h, ra;
cout<<"radius of cylender: ";
cin>>r;
cout<<"height of the cylender: ";
cin>>h;
v=h*(3.14)*(r^2);
cout<<"volume: "<<v<<"\n";
cout<<"radius of the circle: ";
cin>>ra;
cout<<"area of the circle: "<<3.14*(ra^2)<<"\n";
cout<<"cercumferance of the circle: "<<(2*3.14)*ra;
return 0;
}