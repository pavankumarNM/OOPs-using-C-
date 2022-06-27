#include<iostream>
using namespace std;
class number {
int a;
public:

number(int x){
    a=x;
}
number(number &obj){  //this is the user copy constructor if not given the complier takes the default copy constructor
    a=obj.a;
}
void display()
{
    cout<<"the number is "<<a<<endl;

}
}o1(34),o2(22);
int main(){
    o1.display();
    o2.display();
    number c(o1);
     c.display();
    return 0;
}
//this is just the copy constructor 