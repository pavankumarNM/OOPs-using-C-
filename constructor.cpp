#include <iostream>
using namespace std;
class a
{

    int x, y;

public:
    a();
    void print()
    {
        cout << "the complex number is " << x << " + i" << y << endl;
    }

} o1;
a::a()
{
    x = 2;
    y = 4;
}
int main()
{
    o1.print();
    return 0;
}