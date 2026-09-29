#include <iostream>
using namespace std;
int main(){
    int i=0;
    string first="",last,name;
    cout<<"enter the name: ";
    cin>>name;
    
    while(name[i]!=_SPACE){
        first=first+name[i];
        i=i+1;
    }
    cout<<first;
    
return 0;
}