#include <iostream>
using namespace std;
class base
{
private:
    int a = 10;

protected:
    int b = 50;

public:
    int c = 100;
   void printbase()
    {
        cout<<"the value of a in  base is "<<a<<endl;
        cout << "the value of b in base  is " << b << endl;
        cout<<"the value of c in base is "<<c<<endl;
    }
};
class derived1 : public base
{
public:
   void print()
    {
      //  cout<< "the value of a  in class derived is " << a << endl;this is private can't print
        cout<<"the value of b in class derived is "<<b<<endl;   
        cout << "the value of c in class derived  is " <<c << endl;
    }
};
int main()
{
    base z;
    z.printbase();
    derived1 d;
    d.print();

    //cout<<"the value of a is "<<z.a<<endl;      cant print private
    //cout<<"the value of b is "<<z.b<<endl;       cant print protected
    cout << "the value of c in main using private visibility mode is " << z.c << endl; // can print in both cases ie protected and public
    cout << "the value of c in main  using public visibility mode is " << d.c << endl; //cant print in public mode
    return 0;
}
