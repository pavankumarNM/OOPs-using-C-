#include<iostream>
using namespace std;
template<class T>
class vector{
    
    public:
    T* arr;
    int size;
    vector(int m){
        size=m;
        arr=new T[size];
    }
    T dotproduct(vector &v){
        T d=0;
          int i;
        for ( i = 0; i < size; i++)
        {
            d+=this->arr[i]*v.arr[i];
        }
        return d;
    }
};
int main(){
    
    vector <float>v1(2);
    v1.arr[0]=1.3;
    v1.arr[1]=22.22;
    vector <float>v2(2);
    v2.arr[0]=21.6;
    v2.arr[1]=2.333;
    float a=v1.dotproduct(v2);
   cout<<a<<endl;
    return 0;
}




/*     this below function is for only integers vectors above is template used function
ok i thing u learnt this much now concentrate on the ESA exams   plz ........ 
class vector{    
    
    public:
    int* arr;
    int size;
    vector(int m){
        size=m;
        arr=new int[size];
    }
    int dotproduct(vector &v){
        int d=0;
          int i;
        for ( i = 0; i < size; i++)
        {
            d+=this->arr[i]*v.arr[i];
        }
        return d;
    }
};
int main(){
    int a;
    vector v1(2);
    v1.arr[0]=1;
    v1.arr[1]=2;
    vector v2(2);
    v2.arr[0]=1;
    v2.arr[1]=2;
   a=v1.dotproduct(v2);
   cout<<a<<endl;
    return 0;
}

*/