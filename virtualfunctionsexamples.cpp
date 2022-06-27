#include <iostream>
#include <string>
#include <cstring>
using namespace std;
class manager
{
    int id;
    string name;
    float weight;

public:
    int manager(int data1, string s, float w)
    {
        id = data1;
        name = s;
        weight = w;
    }
    virtual void display(void)
    {
        cout << "the manager details are  " << endl;
        cout << "id = " << id << endl;
        cout << "name = " << name << endl;
        cout << "weight = " << weight << endl;
    }
};
class worker1 : public manager
{
    int workergrade1;

public:
    void worker1(int i, int data1, string s, float w) : void manager(int data1, string s, float w)
    {
        i = workergrade1;
    }
    void display(void)
    {
        cout << "the worker details are  " << endl;
        cout << "id = " << id << endl;
        cout << "name = " << name << endl;
        cout << "weight = " << weight << endl;
        cout << "workergrade1 = " << workergrade1 << endl;
    }
};
class worker2 : public manager
{
    int workergrade2;

public:
    void worker2(int i, int data1, string s, float w) : void manager(int data1, string s, float w)
    {
        i = workergrade2;
    }
    void display(void)
    {
        cout << "the worker details are  " << endl;
        cout << "id = " << id << endl;
        cout << "name = " << name << endl;
        cout << "weight = " << weight << endl;
        cout << "workergrade2 = " << workergrade2 << endl;
    }
};
int main()
{
    int id;
    string name;
    float weight;
    manager head;
    id = 1;
    name = mayanna;
    weight = 80;
    head.manager(id, name, weight);
    head.display();
    return 0;
}

// lot of errors check in free time