#include<iostream>
#include<cstring>
#include<bits/stdc++.h>
int i;
using namespace std;
class Binary{
       string s;

 
   public:
     void check(void);
   void read(void);
   void display(void);
   void ones(void);
};
void Binary::read(void){
    cout<<"enter the binary number in the form of 0 & 1"<<endl;
    cin>>s;
}
void Binary::check(void){

   for(i=0;i<s.length();i++)
   {
       if((s.at(i)!='1')&&(s.at(i)!='0'))
       cout<<"incorrect binary numbers"<<endl;
       exit(0);
   }
}
void Binary::display(void){
    b.check();
    cout<<"displaying the binary numbers"<<endl;
     for(i=0;i<s.length();i++){
         cout<<s.at(i);
     }
}
void Binary::ones(void){

   for(i=0;i<s.length();i++)
   {
      if(s.at(i)=='0')
      s.at(i)=1;
      else(s.at(i)=='1');
      s.at(i)=0;
   }
}


int main(){
   Binary b;
   b.read();
   b.check();
   b.display();
   b.ones();

    return 0;
}