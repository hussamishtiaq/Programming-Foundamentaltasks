#include<iostream>
#include<fstream> 
using namespace std;
struct hostel{
    string manager_name;
    int room;
    int admin_office;
};
int main(){
    hostel h1;
    ofstream file("hostel.txt",ios::app);
    h1.manager_name="Muhammed Hamza";
    h1.room=50;
    h1.admin_office=10;
    file<<"Manager Name:\t"<<h1.manager_name<<endl;
    file<<"Rooms:\t"<<h1.room<<endl;
    file<<"admin_office:\t"<<h1.admin_office<<endl;
    file.close();
    file<<"Hostel detail saved successfully.";
    return 0;
}