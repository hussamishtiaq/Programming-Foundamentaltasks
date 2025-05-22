#include<iostream>
#include<random>
using namespace std;
int  Guess(){
random_device rd;
mt19937 gen(rd());
uniform_int_distribution<> distr(1,100);
int random_number =distr(gen);
return random_number;
};

int main(){
    int random_number,even_random_number;
cout<<"Gusess a Number and don't write it here"<<endl;
cin.get();
cout<<"Double the number you think"<<endl;
cin.get();
random_number=Guess();
even_random_number=(random_number%100+1)*2;
cout<<"Add "<<even_random_number<< "to the the number"<<endl;
cin.get();
cout<<"Half the total know"<<endl;
cin.get();
cout<<"Now subtract the number you thought of"<<endl;
cin.get();
cout<<even_random_number/2<<endl;

}