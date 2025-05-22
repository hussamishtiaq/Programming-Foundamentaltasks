#include<iostream>
using namespace std;
int main(){
    int x;
    printf("Enter the value for x:");
    cin>>x;
   if(x<-1||x>2){
    printf("This qudratic expression is positive");
   }
   else{
    printf("This quadratic expression is negative");
   }
}