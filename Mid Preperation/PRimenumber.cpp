#include<iostream>
using namespace std;
bool isPrime(int num){
    if(num<2) return false;
    for(int i=2;i*i<=num;i++){
        if(num%i==0)
        return false;
    }
    return true;
}
int main(){
    int number;
    cout<<"Enter a number:";
    cin>>number;
    if(isPrime(number))
    cout<<number<<"is a Prime Number"<<endl;
else{
cout<<number<<"is Not a Prime Number"<<endl;
}
return 0;
}
