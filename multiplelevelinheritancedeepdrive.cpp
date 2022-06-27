#include<iostream>
using namespace std;
class base{
    protected:
    int roll_number;
    public:
   
    getroll(int a){
        roll_number=a;
    }
    printroll(void){
   cout<<"the roll number is "<<roll_number<<endl;
    }
};
class exam: public base
{
    protected:
    int maths,physics;
    public:
  
   getmarks(int a,int b){
       maths=a;
       physics=b;
   }
   printmarks(){
       cout<<"the marks of maths is "<<maths<<endl;
       cout<<"the marks of physics is "<<physics<<endl;
   }
};
class result : public exam{
    protected:
     float percentage;
    public:
  
   printpercent(){
       cout<<"the result of maths and physics in percentage is "<<(maths+physics)/2<<endl;
   }
};
int main(){
        result pavan;
        pavan.getroll(840);
        pavan.printroll();
        pavan.getmarks(80,100);
        pavan.printmarks();
        pavan.printpercent();
    return 0;
}






// some problems fucking solve
// get lost mother fucker




//backing off sukers






//solved successfully ;;;;;;;;;;;;;;