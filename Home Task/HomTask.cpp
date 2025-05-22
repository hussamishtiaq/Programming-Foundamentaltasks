#include<iostream>
#include<string>
using namespace std;
    struct Student {
        string name;
        int age;
        float CGPA;
        int semester;
        int roolnumber;
    };
int main(){

    Student details;


    cout<<"Enter Your Name:\t";
getline(cin,details.name);
    // cin>>details.name;
    cout<<"Enter Your Age:\t\t";

    cin>>details.age;
    cout<<"Enter Your CGPA:\t";

    cin>>details.CGPA;
        cout<<"Enter Your Semester:\t";

    cin>>details.semester;

      cout<<"Enter Your Roll-Number:\t";

    cin>>details.roolnumber;


    // 
    cout<<"\n Your Name:"<<details.name<<endl;
  cout<<"\n Your Age:"<<details.age<<endl;
  cout<<"\n Your CGPA:"<<details.CGPA<<endl;
   cout<<"\n Your Semester:"<<details.semester<<endl;
      cout<<"\n Your Rool-Number:"<<details.roolnumber<<endl;

   
  return 0;
}