#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number:";
    cin>>num;
    if(num<2){
        cout<<"It is nor a prime nor a composite number";
    }else{
    if(2<=num/2){
if(num%2==0){
    cout<<"It is composite number";
}
else{
    cout<<"It is a prime number";
}
    }
    else{
        cout<<"It is a prime number";
    }

    }
}