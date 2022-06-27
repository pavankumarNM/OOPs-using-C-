#include<iostream>
using namespace std;
class simple{
int a,b;
public:
setdata(int data1,int data2){
     a=data1;
     b=data2;
    cout<<"the data assigned successfully"<<endl;
}
print(){
    cout<<"the value of a is "<<a<<endl;
    cout<<"the value of b is "<<b<<endl;
}
};
int main(){
   // simple s;
    //simple *ptr = &s;
      // ptr->setdata(1,2);       //   or    (*ptr).setdata(1,2);    // dereferencing the using the pointer
       //ptr->print();             //   or   (*ptr).print();
  
   
   simple* ptr = new simple[4];
   ptr->setdata(3,4);
   ptr->print();
    ptr++->setdata(5,6);
   ptr+4->print();
   

      return 0;  
}