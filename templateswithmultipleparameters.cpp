#include<iostream>
using namespace std;
template<class T1,class T2>
class A{
    public:
    T1 data1;
    T2 data2;
     A(T1 a,T2 b){
        data1=a;
        data2=b;

    }
    void B(){
        cout<<this->data1<< "   "<<this->data2<<endl;
    }

};
int main(){
    A<float ,char>C(2.2,'e');
    C.B();
    return 0;
}