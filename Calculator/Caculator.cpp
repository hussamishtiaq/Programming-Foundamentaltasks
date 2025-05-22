#include<iostream>
using namespace std;
int main(){
int v1;
int v2;
char op;
cout<<"Enter the first value:";
cin>>v1;
cout<<"Enter the operator:";
cin>>op;
cout<<"Enter the second value :";
cin>>v2;
switch(op){
    case '+':
    
    cout<<"Result ="<<v1+v2;
    break;
       case '-':
    cout<<"Result ="<<v1-v2;
    break;
       case '/':








       
       if(v2!=0){
    cout<<"Result ="<<v1/float(v2);
       }
       cout<<"undefined";
       break;
       case '*':
    cout<<"Result ="<<v1*v2;
    break;
           case '%':
    cout<<"Result ="<<v1%v2;
    break;

}
}