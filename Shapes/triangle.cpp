#include<iostream>
using namespace std;
int main(){
    int v=6;
    for(int i=0;i<=v;i++){
    for(int space=v;(space)>=i;space--){
    
        cout<<"\t";
        
    }
        for(int j=0;j<=i;j++){
                cout<<".";
                
                for(int k=2;k<=j;k++){
                    
                    cout<<".";
                }
    
        }
        cout<<"\n";
    }
}