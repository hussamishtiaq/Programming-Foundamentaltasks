// Header files
#include<iostream>
#include<fstream>
// namespace
using namespace std;
// structure
struct Movie{
    string title;
    int year;
    string type;
};
// 
// Main function
int main(){
Movie m;//used structure dataype that i created
string line;//create a string variable to store the lines in the file

cout<<"Enter the Title:\n";
getline(cin,m.title);//getline(cin,m.tilte) is ko use kara ga to spaces ka stah name add kar sakhta ha warna siraf cin sanahi ho ga
cout<<"Enter the Release date:\n";
cin>>m.year;
cout<<"Enter the Movie type:\n";
getchar();//Remove buffer memory
getline(cin,m.type);
ofstream file("MovieInfo.txt",ios::app);//create a file and use ios::app to tell that we append the data
file<<"Movie Title:"<<m.title<<"\nRelease Date:"<<m.year<<"\nType:"<<m.type;//Write the data
file.close();//close file

ifstream read("MovieInfo.txt");//Open file to read data we entered
while(getline(read,line)){//loop to read the data one by one 
cout<<line<<endl;
}

return 0;
}