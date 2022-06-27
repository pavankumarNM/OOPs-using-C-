#include<iostream>
using namespace std;
class store{
    private:
    int a,b;
    public:
    int c,d;
    void setsalary(int a,int b);   // must required default constructor for defining out of the class functions
    void getsalary(){
        cout<<"the salary of main   "<<a<<endl;
        cout<<"the salary of second main  "<<b<<endl;
        cout<<"the salary of third main  "<<c<<endl;
       cout<<"the salary of fourth main  "<<d<<endl;
    }

};
void store :: setsalary(int x,int y){
a=x;
b=y;

}

int main(){
         store goods;

     goods.c=7000;
     goods.d=5000;
    //  goods.a=200 manipulation of a data can't happen here because it is declared private up there

    goods.setsalary(20000,10000);
    goods.getsalary();
    return 0;
}