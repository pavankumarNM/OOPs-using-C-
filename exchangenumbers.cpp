#include <iostream>
using namespace std;
class b;
class a
{
    int data1;
    friend void exchange(a &, b &);

public:
    void setdata(int value)
    {
        data1 = value;
    }
    void display()
    {
        cout << "the entered value is " << data1 << endl;
    }
} o1;
class b
{
    int data2;
    friend void exchange(a &, b &);

public:
    void setdata(int value)
    {
        data2 = value;
    }
    void display()
    {
        cout << "the entered value is " << data2 << endl;
    }

} o2;
void exchange(a &data1, b &data2)
{
    int temp = o1.data1;
    o1.data1 = o2.data2;
    o2.data2 = temp;
}
int main()
{
    o1.setdata(3);
    o1.display();
     o2.setdata(4);
    o2.display();
    exchange(o1,o2);
    cout<<"the exchange value of o1 becomes "<<endl;
    o1.display();
    cout<<"the exchange value of o2 becomes "<<endl; 
    o2.display();
    

 
    return 0;
}
