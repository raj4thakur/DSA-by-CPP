#include<iostream>
using namespace std;
int main(){
    float total=0;
    string n,r,b,s,m;
    int maths,phy,che,bio,eng;
    cout<<"student name:\n";
    cin>> n;
    cout<<"roll. no:\n";
    cin>>r;
    cout<<"branch:\n";
    cin>> b;
    cout<<"semester:\n";
    cin>>s;
    cout<<"enter marks of 5 subjects:\n";
    cout<<"marks in math out of 100\n";
    cin>>maths;
    cout<<"marks in english out of 100\n";
    cin>>eng;
    cout<<"marks in chemistry out of 100\n";
    cin>>che;
    cout<<"marks in physics out of 100\n";
    cin>>phy;
    cout<<"marskes in biology out of 100\n";
    cin>>bio;
    cout<<"total marks:\n"<<(maths+eng+che+phy+bio);
    total=(maths+eng+che+phy+bio);
    cout<<"\npersentage:\n"<<total/5;
    float per=total/5;
    if (per>=60){
        printf("\nfirst divition");
    }
    else{
        if (45<per<60){
            printf("\nsecond divition");
        }
        else{
            printf("\nthird divition");
        }
    }
    return 0;
}