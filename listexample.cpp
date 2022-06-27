#include<iostream>
#include<list>
using namespace std;
int main(){
    int i;
    list<int> list1;
   
    list1.push_back(2);
     list1.push_back(1);
      list1.push_back(3);
       list1.push_back(4);
        list1.push_back(0);
       list<int>::iterator iter=list1.begin();

//iter++;
cout<<*iter<<" ";

iter++;
cout<<*iter<<" ";

iter++;
cout<<*iter<<" ";


iter++;
cout<<*iter<<" ";

iter++;
cout<<*iter<<" "<<endl;
//list1.remove(3);
//cout<<"after removing the 3 "<<endl;
//list1.pop_back();
//list1.pop_front();
//list1.push_back(676);

list1.push_front(676);
list1.reverse();
list1.sort();
iter=list1.begin();
cout<<*iter<<" ";
iter++;
cout<<*iter<<" ";
iter++;
cout<<*iter<<" ";
iter++;
cout<<*iter<<" ";

    return 0;
}



// these are the fucking examples that we do in order to ensure matlab kuch bhi in comments 
// ok exit