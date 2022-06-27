#include<iostream>
#include<cmath>
using namespace std;
class abc {
 int a,b;
 public:
  abc(int x,int y){
     a=x;
     b=y;
 }
  abc(int x){
     a=x;
     b=0;
 }
 abc(){
     a=0;
     b=0;
 }
  print(){
     cout<<"the square number is "<<pow(a,b)<<endl;
 }
};
int main(){
    abc o1(9,2);
    o1.print();
     abc o2(2);
    o2.print();
     abc o3;
   o3.print();
    
    
    return 0;
}