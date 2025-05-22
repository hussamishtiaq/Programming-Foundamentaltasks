#include<iostream>
using namespace std;
int main(){
    string names[5] = { "Hussam","Eman","Rehan","Saim","Itasham"};
    int roll[5]={1,2,3,4,5};
    for( int i=0;i<=4;i++){
        cout<<names[i]<<"\t \t"<<roll[i]<<endl;
    }
    return 0;
}