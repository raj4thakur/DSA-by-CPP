#include<iostream>
using namespace std;
class sale{
    public:
    int people;
    int product;
    
    sale(int pe,int pr){
        people=pe;
        product=pr;
    }
    int business(){
        return people*product;
    }
};
int main(){
    sale bar(20,40);
    cout<<bar.business();
    return 0;
}