#include<iostream>
using namespace std;
int fac(int n){
    if(n<=1)
    return 1;
    return n * fac(n-1);
}
int main(){
    int a,n;
    cout<<"enter a number to find the factorial "<<endl;
    cin>>a;
    cout<<"the factorial of the "<<a<<" is "<<fac(a); 
    return 0;
}