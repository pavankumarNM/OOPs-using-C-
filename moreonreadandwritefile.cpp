#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main(){
    string s1,s2;
    ofstream out;
    out.open("sample2.txt");
    out<<"this is writing in the sample2 file  "<<endl;
    out<<"exit    ";
    out.close();
    ifstream in;
    in.open("sample2.txt");
    getline(in,s2);
    cout<<s2;
    // for more line or use can use the while  loops to get these lines
    //  getline(in,s2);
    //cout<<s2;
    //   while(in.eof()==0){     eof means end of file 
    //    getline(in,s2);
    //    cout<<s2;
   // }
        return 0;
}