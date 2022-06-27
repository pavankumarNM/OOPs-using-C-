#include<iostream>
#include<fstream>
using namespace std;
int main(){
    string s1="hehe pavan kumar N M";
    ofstream out("samplehello.txt");
    //cout<<"enter name"<<endl;
    //cin>>s1;
    out<<s1;
    out.close();
    string s2;
    ifstream in("samplehello.txt");
    //in>>s2;
    getline(in,s2);
    cout<<s2;
    

    in.close();
    return 0;
}