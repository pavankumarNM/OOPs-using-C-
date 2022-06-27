#include<iostream>
using namespace std;
class simple{
    int a;
    int b;
    public:
    simple(int data1,int data2):a(data1+2),b(data2*2){     // initialization in the constructor function 
        cout<<"the simple function is successfully executed "<<endl;
      
    }
      print(){
           cout<<"the value of a is "<<a<<endl;
           cout<<"the value of b is "<<b<<endl;
        }
};
int main(){
    simple s(1,2);
    s.print();
    return 0;
}


// simple function plz understand;;;;