#include<iostream>
using namespace std;
int cube(int a){
    return a*a*a;
}
int main(){
    int a;int c;
    cout<<"Enter the number:\n";
    cin>>a;
    c=cube(a);
    cout<<"The cube of "<<a<<" is :"<<c<<endl;
    return 0;
}
