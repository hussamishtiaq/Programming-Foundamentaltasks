#include<fstream>
#include<iostream>
using namespace std;
int main(){
    ofstream file("text.txt");
file.close();
if(file.is_open())
{
    file<<"Don a done";

}
else{
    cout<<"\nnahi open \n";
}
}