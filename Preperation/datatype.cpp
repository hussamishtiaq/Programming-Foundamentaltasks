#include<iostream>
using namespace std;
int main(){
float percentage;
cout<<"Enter your percentage:\n";
cin>>percentage;
if(percentage>=80.0){
    cout<<"Grade A";
}
else if(percentage>=70.0&&percentage<80.0){
    cout<<"Grade B";
}
else if(percentage>=60.0&&percentage<70.0){
    cout<<"Grade C";
}
else if(percentage>=60.0&&percentage<70.0){
    cout<<"Grade D";
}
else{
    cout<<"Fail";
}

return 0;
}