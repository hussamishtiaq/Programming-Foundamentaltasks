#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    int number;
cout<<"Gusess a Number and don't write it here"<<endl;
cin.get();
cout<<"Double the number you think"<<endl;
cin.get();
number=rand();
cout<<"Add"<<number<<"to the the number"<<endl;
cin.get();
cout<<"Half the total know"<<endl;
cin.get();
cout<<"Now subtract the number you thought of"<<endl;
cin.get();
cout<<number/2;
return 0;
}