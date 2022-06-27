#include<iostream>
using namespace std;
template<class T>
class App{
   public:
   T data;
   A(T a){
       data=a;
   }
   display();
   //void display(){
     //  cout<<"the value of data is "<<data<<endl;
  //}
};
//template<class T>
//void A<T>:: display(){
    //cout<<"th value of data is "<<data<<endl;
//}
void func(int a){
    cout<<"the basic "<<endl;
}

template<class T>
void func(T a){
    cout<<"the templazied  "<<endl;
}

int main(){
   // A<int>B(3);
   // B.display();
   func(31);    // the first prirority is for the highest match        that  is the basic for this   
func('e');
    return 0;
}




//   check this fucking debug  i can't find fucking shitttttttttt