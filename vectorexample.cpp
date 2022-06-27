#include<iostream>
#include<vector>
int i;
using namespace std;
void display(vector<int> &v){
    for ( i = 0; i < v.size(); i++)
    {
        cout<< v[i];
       // cout<<endl;
    }
    
}
int main(){
    vector<int> vec1;
    int e,i,size;
    cout<<"enter the size of vector "<<endl;
    cin>>size;

    for ( i = 0; i <size; i++)
    {
    cout<<"enter the element "<<endl;
    cin>>e;
    vec1.push_back(e);
    
    }
    //vec1.pop_back();
    vector<int>::iterator iter=vec1.begin();
    vec1.insert(iter+2,1000,4);
    
    display(vec1);
    
    return 0;
}