#include<iostream>
#include<string>
using namespace std;
    struct Department {
        string name;
        string hodname;
        int classes;
        int totalstudents;
        int staff;
        string Rank;
    };
int main(){
Department details;
details.name="Software Engineering";
details.hodname="Doctor Khuram";
details.classes=6;
details.totalstudents=1000;
details.staff=20;
details.Rank="1st";
cout<<"Department:\t"<<details.name<<endl<<"HOD:\t\t"<<details.hodname<<endl<<"Classes:\t"<<details.classes<<endl<<"TotalStudents:\t"<<details.totalstudents<<endl<<"NumberofStaff:\t"<<details.staff<<endl<<"Rank\t"<<details.Rank<<endl;
  return 0;
}