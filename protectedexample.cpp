#include<iostream>
using namespace std;
class base{
    protected:
    int a;
    private:
    int b;
    public:
    int c;
};
class derived:protected base{
    public:
    print(void){
     cout<<"printing in class  base"<<a<<endl;
     //cout<<"printing in class  base"<<b<<endl;     cant ptint because private there cant be inherited
     cout<<"printing in class  base"<<c<<endl;
      }

       

};
int main(){
  //  int c;
    base ba;
    derived de;
   de.print();
//cout<<"printing in class   c base"<<de.a<<endl;
    return 0;
}




// simple understand
//plz exit from the screen 