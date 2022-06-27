#include <iostream>
#include<cmath>
using namespace std;
 //class point p1,p2,p3;
class point
{
    int a, b, c, d, f;

public:
     pointp(int x, int y)
    {
        a = x;
        b = y;
    }
    display()
    {
        cout << "points are " << a << " , " << b << endl;
    }
     distance(point o1,point o2){
    c=pow((o2.a-o1.a),2);
     d=pow((o2.b-o1.b),2);
    cout<<"the distance between them is "<<c <<endl;
    cout<<"the distance between them is "<<d <<endl;
    cout<<"the distance between the two points is "<<sqrt(c+d);
    }
};
int main()
{
    point p1,p2,p3;
 p1.pointp(1,1);
   p1.display();
    p2.pointp(9,10);
   p2.display();
    p3.distance(p1,p2);
    return 0;
}
// benke laude the code with harry ne sabh kuch gadbad kardiya 
//i wasted about 2 hrs to find out the single bug fucking time waste        fuck u bugs      