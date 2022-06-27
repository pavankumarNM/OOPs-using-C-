#include<iostream>
using namespace std;
 class bankdeposit{
     int principal;
     int years;
     float interestrate;
     float returnvalue;


     public:
     bankdeposit(){}
     bankdeposit(int P,int Y,float r);
     bankdeposit(int P,int Y,int R);
     void show(void);
     
     
      
 };
 bankdeposit::bankdeposit(int P,int Y,float r){
      principal=P;int i;
      years=Y;
      interestrate=r;
      returnvalue=principal; 
      for ( i = 0; i < years; i++)
      {
          returnvalue=returnvalue*(1+interestrate);
      }
 }
bankdeposit::bankdeposit(int P,int Y,int R){
      principal=P;int i;
      years=Y;
      interestrate=(float)R;
      returnvalue=principal; 
      for ( i = 0; i < years; i++)
      {
          returnvalue=returnvalue*(1+interestrate);
      }
        
     }
void bankdeposit::show(){
 cout<<"the principal amount was "<< principal<<endl;
 cout<<"for the years "<< years<<endl;
 cout<<"at the interest rate of "<< interestrate<<endl;
 cout<<"at last u will get return amount is "<< returnvalue<<endl;

     }

int main(){
    bankdeposit o1,o2;
    int p,y,r;float R;
    cout<<"enter the value of  p y r(float) "<<endl;
    cin>>p>>y>>r;
    o1.bankdeposit(p,y,r);
    o1.show();
    cout<<"enter the value of  p y R(int) "<<endl;
    cin>>p>>y>>R;
    o2.bankdeposit(p,y,R);
    o2.show();

    return 0;
}


// some error is there plz check it and find out;
