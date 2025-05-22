#include<iostream>
using namespace std;
int main(){
    int v1,v2;char op;
    cout<<"Enter the first value:";
    cin>>v1;
    cout<<"Enter the Operator +,-,/,%:";
    cin>>op;
    cout<<"Enter the second value:";
cin>>v2;
    switch(op){
        case '+':
        cout<<"Result="<<v1+v2<<endl;
        break;
  case '-':
        cout<<"Result="<<v1-v2<<endl;
        break;
  case '/':
  if(v2!=0){
        cout<<"Result="<<v1/v2<<endl;
  }
  cout<<"undefined"<<endl;
  break;
  case '*':
        cout<<"Result="<<v1*v2<<endl;
        break;
  case '%':
        cout<<"Result="<<v1%v2<<endl;
        break;
    
    }

}