#include<iostream>
using namespace std;
struct student{
    int age;
    string name;
};
int main(){
student details;
cin>>details.age;
cin>>details.name;
cout<<details.age<<endl;
cout<<details.name<<endl;
    return 0;
}