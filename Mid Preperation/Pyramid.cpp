#include<iostream>
using namespace std;
int main(){
int row=5;
for(int i=1;i<=row;i++){
    for(int space=i;space<=row;space++){
        cout<<" ";
    }
    for(int j=1;j<=i;j++){
        
        cout<<" "<<j<<" ";
    }
    cout<<endl;
}
}