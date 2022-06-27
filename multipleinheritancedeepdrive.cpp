#include <iostream>
using namespace std;
class base1
{
protected:
    int a;

public:
    void geta(int data1)
    {
        a = data1;
    }
};
class base2
{
protected:
    int b;
public:
    void getb(int data2)
    {
        b = data2;
    }
};
class derived : public base1, public base2
{
public:
    print()
    {
        cout << "the value of a is " << a << endl;
        cout << "the value of  is " << b << endl;
        cout << "the value of a+b  is " << a + b << endl;
    }
};

int main()
{
    derived der;
    der.geta(1);
    der.getb(2);
   der.print();
    return 0;
}



// fucking wasting time no way there has to be the way why iam fucking doing all these shit hell 
// no matter what heppens i will always find a way to don this shit 
//  yavagadru time sikkudre nodu macha idella ;;;;;;;;;;;;;;;
// exit idiot