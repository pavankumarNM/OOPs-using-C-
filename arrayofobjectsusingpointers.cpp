#include<iostream>
using namespace std;
class shop{
int id;
float price;
public:
getdata(int a,float b){
    id=a;
    price=b;
}
print(){
    cout<<"the id is "<<id<<endl;
    cout<<"the price is "<<price<<endl;  
}
};
int main(){
    int size,i,j; int c;float d;
    cout<<"enter the size of the shop "<<endl;
    cin>>size;
    shop s;
    shop* ptr=new shop[size];
    shop* ptrtemp=ptr;
    for ( i = 1; i <=size; i++)
    {
        
     cout<<"enter the id and  price for  "<<i<<endl;
     cin>>c>>d;
     ptr->getdata(c,d);
     ptr++;
     }
     for ( j = 1; j <=size; j++)
     {
       ptrtemp->print();
       ptrtemp++;
     }
     
    
    
    return 0;
}