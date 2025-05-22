#include<iostream>
using namespace std;
int main(){
   int temperature,pressure;
   cout<<"Enter the value of temperature:";
   cin>>temperature;
   cout<<"Enter the value of pressure:";
   cin>>pressure;
   if(temperature>=100||pressure>=200){
    printf("Warning");
   }
   else{
    printf("OK");
   }
}