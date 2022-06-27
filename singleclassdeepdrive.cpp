#include <iostream>
using namespace std;
class base
{
    int data1;

public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();
};
void base ::setdata(void)
{
    data1 = 10;
    data2 = 20;
}
int base ::getdata1(void)
{
    return data1;
}
int base ::getdata2(void)
{
    return data2;
}
class derived : public base
{
    int data3;

public:
    void process();
    void display();
};
void derived ::process()
{
    data3 = data2 * getdata1();
}
void derived ::display()
{
    cout << "the value of data1 is " << getdata1() << endl;
    cout << "the value of data2 is " << data2 << endl;
    cout << "the value of data3 is " << data3 << endl;
}
int main()
{
    derived der;
    der.setdata();
    der.getdata1();
    der.process();
    der.display();
    return 0;
}



//single class deep drive
// there is the another way of writing this code in the private visibality that is below



#include <iostream>
using namespace std;
class base
{
    int data1;

public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();
};
void base ::setdata(void)
{
    data1 = 10;
    data2 = 20;
}
int base ::getdata1(void)
{
    return data1;
}
int base ::getdata2(void)
{
    return data2;
}
class derived : private base
{
    int data3;

public:
    void process();
    void display();
};
void derived ::process()
{
    setdata();getdata1();
    data3 = data2 * getdata1();
}
void derived ::display()
{
    
    cout << "the value of data1 is " << getdata1() << endl;
    cout << "the value of data2 is " << data2 << endl;
    cout << "the value of data3 is " << data3 << endl;
}
int main()
{
    derived der;
    //der.setdata();
   // der.getdata1();
    der.process();
    der.display();
    return 0;
}