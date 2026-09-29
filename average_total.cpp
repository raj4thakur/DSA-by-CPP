#include <iostream.h>
using namespace std;
int main(){
    int i,c=0;
    float s=0.0;
    float a[4]={};
    cout<<"enter the four numbers:\n";
    for (i=0;i<4;i++){
        cin>>a[i];
    }
    for (i=0;i<4;i++){ṇ
        s=s+a[i];
        c=c+1;
    }
    cout<<"Total: "<<s<<"\naverage: "<<(s/c)<<"\n";
    return 0;
}