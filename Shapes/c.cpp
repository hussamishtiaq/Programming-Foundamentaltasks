#include<iostream>
using namespace std;
int main(){
  cout<<"   #"<<endl;
  cout<<"  ###"<<endl;
cout<<" #####"<<endl;
cout<<"#######"<<endl;

int rows=4;
for(int i=1;i<=rows;i++){
for(int j=1;j<=i;j++){
    for(int space=rows-1;space>=i;space--){
        cout<<" ";
    }
         for(int k=1;k<=i;k++){

    cout<<"#";
    }
   
}
    cout<<endl;
}
}

