#include<iostream>
using namespace std;
void intro( string a){
  
    cout<<"Your  name is "<<a<<"\n";
}
int main(){
      string a;
    cout<<"Enter the name:";
    cin>>a;
    intro(a);
    
    return 0;
}
