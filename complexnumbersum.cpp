#include <iostream>
using namespace std;
class complex
{
    int r, i, x, y;

public:
    void setcomplex(int x, int y)
    {
        r = x;
        i = y;
    }
    int complexadd(complex o1, complex o2)
    {
        r = (o1.x + o2.x);
        i = (o1.y + o2.y);
    }
    void print()
    {
        cout << "the complex number is " <<r<< " +i" <<i<< endl;
    }
};
int main()
{
    complex c1, c2, c3;
    c1.setcomplex(1, 2);
    c1.print();
    c2.setcomplex(3, 4);
    c2.print();
    c3.complexadd(c1,c2);
    c3.print();
    return 0;
}