#include<iostream>
using namespace std;
class roll_number{
 protected:
 int roll;
 public:
 void setroll(int r){
     roll=r;
 }
       printroll(){
           cout<<"the roll number is "<<roll<<endl;
       }
};
class score: virtual public roll_number{
  protected:
  int score;
  public:
  void setscore(int s){
         score=s;
  }
  void print(void){
      cout<<"the score is "<<score<<endl;
  }
};
class marks: virtual public roll_number{
    protected:
    int physics,maths;
    public:
    void setmarks(int p,int m){
        physics=p;
        maths=m;
    }
};
class result:public score,public marks{
    protected:
    int total;
    public:

    void display(){
        cout<<"the roll number is "<<roll<<endl
           <<"the score in sports is "<<score<<endl
           <<"the marks of physics and maths "<<physics<<" & " <<maths<<endl
           <<" total score is "<<score+physics+maths<<endl;
    }
};
int main(){
    result R;
    R.setroll(420);
    R.setscore(90);
    R.setmarks(85,80);
    R.display();

    return 0;
}