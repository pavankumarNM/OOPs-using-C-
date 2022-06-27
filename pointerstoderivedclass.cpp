#include<iostream>
using namespace std;
class base {
 
  public:
   int a;
   getdata(int data1){
       a=data1;
   }
   
       display(){
         cout<<"base called"<<endl;
         cout<<"the value of a is "<<a<<endl;
       }
   
};
class derived : public base{
 
  public:
   int b;
  getdata(int data2){
       b=data2;
   }
   
       display(){
         cout<<"derived called  "<<endl;
          cout<<"the value of a is "<<a<<endl;
         cout<<b<<endl;
       }
   

};
int main(){
    base b;
    b.getdata(1);
    //b.display();
    derived d;
     d.getdata(2);
   // d.display();
    base* base_pointer;
    derived* derived_pointer;
    base_pointer=&d;
    //base_pointer->b=10;     cant assign value because the pointer from base class can't access the derived class variables and function
   // base_pointer->display();    can't access
   //derived_pointer=&d;
   // derived_pointer->display();
    
    derived_pointer->a=10;
   // derived_pointer->display();
     base_pointer->display();
    return 0;
}



// what i understand is u can point the base class pointer to the derived class object 
//but u cant change the values of derived class variables and access  function  
//u can't change the pointer from the derived class pointing towards base class object 
//nothing i always say fuck but for whom does it represent i don't know
//exit