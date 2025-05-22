#include<iostream>
#include<fstream>
using namespace std;
int main(){
    string words;
  ifstream read("file.txt");
while(getline(read,words)){

    cout<<words<<"\n";
}
}