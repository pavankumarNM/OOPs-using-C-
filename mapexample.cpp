#include<iostream>
#include<map>
#include<string>
using namespace std;
int main(){
    int i;
    map<string,int> map1marks;
    map1marks["x"]=33;
    map1marks["z"]=44;                         // it sorts by name while stacking into file sytem 
    map1marks["y"]=76;
    
    map<string,int>::iterator iter;

     for ( iter=map1marks.begin(); iter!=map1marks.end(); iter++)
     {
         cout<<(*iter).first<<"->"<<(*iter).second<<endl;
     }
     
    return 0;
}