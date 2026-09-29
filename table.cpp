#include<iostream>
using namespace std;
int main(){
int r,i,k;

cout<<"write a number of which 10 multiple you want\n";
cin>>r;
for (i=1;i<=10;i++){k=r*i;
    cout<<r<<"*"<<i<<"="<<k<<"\n";
}
return 0;
}