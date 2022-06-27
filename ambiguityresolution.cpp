#include<iostream>
using namespace std;
class base1{
     int a;
     public:
     hello(){
         cout<<"this hello in base 1"<<endl;
     }
};
class base2{
    int b;
public:
     hello(){
         cout<<"this hello in base 2"<<endl;
     }
};
class derived : public base1,public base2{
     int c;
      
     public:
     void hello(){
      base1::hello();   // if we want to execute from base1 class
      base2::hello(); // if we want to execute from base2 class 
     }
};
int main(){
     base1 B1;
     base2 B2;
     B1.hello();
     B2.hello();
     derived D;
     D.hello();
    return 0;
}