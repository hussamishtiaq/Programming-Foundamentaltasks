#include<iostream>
#include<fstream>
//
using namespace std;
struct Movie {
    string title;
    int releasedate;
    string type;
};
int main(){


    Movie m1;
    string line;
    cout<<"Enter the Title:\n";
    getline(cin,m1.title);
    cout<<"Enter release date:\n";
    cin>>m1.releasedate;
    cout<<"Enter the Movie type\n";
    getchar();
    getline(cin,m1.type);
    ofstream file("Movie.txt");
    file<<"Movie title:"<<m1.title<<"\nRelease date:"<<m1.releasedate<<"\nMovietype:"<<m1.type;
    file.close();

    ifstream read("Movie.txt");
    while(getline(read,line)){
        cout<<line<<endl;
    }
    read.close();

    return 0;
    }