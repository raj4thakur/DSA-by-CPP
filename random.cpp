// #include<iostream>
// #include<cstdlib>
// using namespace std;
// int main(){
//     int t=6;
//     for(int i=0;i<2;i++){
//         cout<<rand()%t;
//     }
//     return 0;
// }
#include<iostream>
#include<ctime>

using namespace std;
main() {
   srand(time(0));
   cout << "The random number is: "<<rand()%7;
}