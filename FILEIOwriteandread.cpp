#include<iostream>
#include<fstream>
using namespace std;
int main(){
    string s="hello pavan     ";
    ofstream out("samplehello.txt");
    out<<s;
    string s1;
    ifstream in("sample2.txt");
    getline(in,s1);
   // in>>s1;
    cout<<s1;
  
       string s2="hello pavan ";
    ofstream out2("samplehello.txt");
    out<<s2;
      return 0;
}



