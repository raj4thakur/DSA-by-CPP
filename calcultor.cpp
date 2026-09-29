#include <iostream>
using namespace std;
int main(){
    string op;
    float x;
    float y;
    cout<<"enter the first number\n";
    cin>>x;
    cout<<"enter the secound number\n";
    cin>>y;
    cout<<"what operation do you wand to perform\n";
    cin>>op;
    if (op=="add") 
        {cout<<"result\n"<<x+y;
        }
    else{ if (op=="sub")
        cout<<"result\n"<<x-y;
    else {if (op=="mult")
        cout<<"result\n"<<x*y;
    else {if (op=="div")
        cout<<"result\n"<<x/y;
    return 0;
    }
    }
    }
    }