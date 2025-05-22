#include<iostream>
using namespace std;
int average(int x,double y){
    int average =((x+y)/2);
    return average;
    
}
int main(){
    int a,averages;
    double b ;
    cout<<"Enter the First number:\n";
    cin>>a;
 cout<<"Enter the Second number:\n";
    cin>>b;

    averages=average(a,b);
    cout<<"Sum of the twonumbers "<<a<<" ,"<<b<<" is: "<<averages<<endl;
}
