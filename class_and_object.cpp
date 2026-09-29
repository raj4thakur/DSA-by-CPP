// class is unique datatype
// class are of two types public and private
// public is acces spacifire
// student in class is object
#include<iostream>
using namespace std;
    class tringle{
        public:
        void area(float base,float height){
        cout<<"area: "<<base*(height/2)<<" UNITS";
    }
    };
    int main(){
        float b,h;
        tringle a;
        cout<<"base:";
        cin>>b;
        cout<<"\nheight:";
        cin>>h;
        a.area(b,h);
    return 0;
    }