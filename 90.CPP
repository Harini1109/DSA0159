#include <iostream>
using namespace std;
class Person{
  public :
  virtual void work(){}
};
class Employee : public Person {
 public:
  void work() override {
    cout<<"Employee is doing the task."<<endl;
  }
};
class Manager : public Person {
 public:
  void work() override {
    cout<<"Manager is overseeing the task."<<endl;
  }
};
int main(){
  Person* a;
  Employee b;
  a=&b;
  a->work();
  cout<<endl;
  b.Person :: work();
  cout<<endl;
  Manager c;
  a=&c;
  a->work();
  cout<<endl;
  c.Person :: work(); 
  cout<<endl;
  Person d;
  d.work();
  return 0;
}
