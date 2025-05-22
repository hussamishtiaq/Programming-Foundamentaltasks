#include<iostream>
using namespace std;
void add(int,int);
int main(){
int a,b;
printf("Enter first number:\n");
cin>>a;
printf("Enter the seconde number:\n");
cin>>b;
add(a,b);
}
void add(int a,int b){
    int c=a+b;
 cout<<"\nsum of "<<a<<" and "<<b<<" is:\n"<<c;
 return;
}