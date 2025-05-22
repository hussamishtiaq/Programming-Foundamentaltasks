#include<iostream>
using namespace std;
int main(){
    int sum=0;
    for(int i=2;i<=30;i+=2){
        cout<<i<<endl;
        sum+=i;
    }
    cout<<sum<<endl;
}