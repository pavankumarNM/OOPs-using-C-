#include <iostream>
using namespace std;
class complex;
class calculator
{
public:
    int sumrealcomplex(complex, complex);
    int sumimgcomplex(complex, complex);
};
class complex
{
      //  friend class calculator;



public:
    int a, b;

    //friend int calculator::sumrealcomplex(complex, complex);
    //friend int calculator::sumimgcomplex(complex, complex);

    void setcomplex(int r, int i)
    {
        a = r;
        b = i;
    }
    void printcomplex()
    {
        cout << "the complex number is " << a << " + i" << b << endl;
    }

} o1, o2, o3;
int sumrealcomplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}

int sumimgcomplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}

int main()
{ calculator calc;
//fuck
    o1.setcomplex(1, 2);
    o1.printcomplex();
    o2.setcomplex(3, 4);
    o2.printcomplex();
    int real= calc.sumrealcomplex(o1,o2);
    cout<<"the real part complex is "<<real<<endl; 
    int img= calc.sumimgcomplex(o1,o2);
    cout<<"the real part complex is "<<img<<endl;


    return 0;
}