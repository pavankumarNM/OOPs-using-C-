#include <iostream>
using namespace std;
// base class
class employer
{

public:
    float salary;

    int id;
    employer() {}
    employer(int ind)
    {
        id = ind;
        salary = 332.2;
         
    }
};
// derived class
class employee : public employer
{
public:
    char language;

    employee() {}
    employee(char i)
    {
       
        id = 2;
        language = i;
        salary = 22;
        
    }
  
};

int main()
{

    employer manager(1);

    cout << "the salary of manager is " << manager.salary << endl;
    cout<<"the id of manager is "<<manager.id<<endl;

    employee worker('k');

    cout << "the id of the worker is  " << worker.id << endl;
    cout << "the salary of the worker is  " << worker.salary << endl;
    cout << "the language of the worker is  " << worker.language << endl;

    return 0;
}

// works simple
// without declaration in derived class if it inherited it gets executed