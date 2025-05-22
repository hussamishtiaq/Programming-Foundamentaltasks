#include<iostream>
#include<string>
using namespace std;
    struct Student {
        string name;
        int age;
        float CGPA;
    };
int main(){
    Student s1;
    s1.name="Hussam";
    s1.age=20;
    s1.CGPA=4.0;
    cout<<"\n"<<s1.name<<endl;
  cout<<"\n"<<s1.age<<endl;
  cout<<"\n"<<s1.CPA<<endl;
  return 0;
}