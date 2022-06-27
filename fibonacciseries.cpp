#include<iostream>
using namespace std;
int fib(int n){
    if(n<=2)
    return 1;
    return fib(n-2)+fib(n-1);
}
int main(){
    int a,b,n;
    cout<<"enter a number to find the fibonacci series of it "<<endl;
    cin>>a;
    cout<<"the fibonacci series of "<<a<<" is "<<fib(a);
    return 0;
}