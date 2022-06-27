#include<iostream>
using namespace std;
  //der(){}

class base1
{
  int a;
  public:
  base1(int data1){
     a=data1;
     cout<<"class base 1 called"<<endl;
  }
  printbase1(){
      cout<<"the value of a is "<<a;
  }
};
class base2
{
    int b;
  public: 
   base2(int data2){
     b=data2;
     cout<<"class base 2 called"<<endl;
     // cout<<"the value of b is "<<b<<endl;
  }
  printbase2(){
      cout<<"the value of b is "<<b;
  }

};
class derived : public base1,public base2{ // if u use this line class base1 is called first 
   // class derived : public base2,public base1{   if u use tis line the class base2 is called first 
   //class derived : public  base1,virtual public base2{    // because of the virtual class  executes first the class base2 is called first
  int c,d;
  public:
  derived(int data1,int data2,int data3,int data4) :  base2(data2),base1(data1) {
      c=data3;
      d=data4;
      cout<<"class base derived called "<<endl;
  }
  printderived(){
    cout<<"the value of the c is "<<c<<endl;
    cout<<"the value of the d is "<<d<<endl;
 }
};

int main(){
    //int data1,dat2;
    derived der(1,2,3,4);
    der.printderived();

    return 0;
}






// this is fucking easy but u have to  do daily practice for this thing    simply fucking crazy right but ont thing to remember that is this is hell 
// dont worry i am just typing to improve my typing skills so that to get better life and don my own thing
    
