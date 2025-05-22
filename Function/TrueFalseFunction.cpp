#include<iostream>
using namespace std;

bool EvenOdd(int a){
    return a%2==0;
    }
    int main(){
        int a ,result;
        cout<<"Enter a value of a:";
        cin>>a;
        result=EvenOdd(a);
        if(result){
            cout<<"The number is even\n";
        }
        else{
            cout<<"The number is odd\n";
        }
    
    }