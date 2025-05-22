#include<iostream>
#include<fstream>
using namespace std;
struct studentdata{
    string name;
    int rollno;
    float cgpa;
};
int main(){
studentdata s1;
cout<<"Enter the name:"<<endl;
cin>>s1.name;

getchar();
cout<<"Enter the roolno:"<<endl;
cin>>s1.rollno;
getchar();
cout<<"Enter the CGPA:"<<endl;
cin>>s1.cgpa;
getchar();
ofstream file("Studentdata.txt",ios::app);
file<<"Name:"<<s1.name<<"Roll No:"<<s1.rollno<<"CGPA:"<<s1.cgpa<<endl;
file.close();
return 0;

}