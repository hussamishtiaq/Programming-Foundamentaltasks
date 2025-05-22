#include<iostream>
using namespace std;
int main(){
    string signal;
    cout<<"Enter the signal\t";
    cin>>signal;
    if(signal=="green"){
        cout<<"You can go.";
    }
    else if(signal=="red"){
        cout<<"You can't go.";
    }
    else if(signal=="yellow"){
        cout<<"Slow Down";
    }
    else{
        cout<<"Mazrat";
    }
    return 0;
}