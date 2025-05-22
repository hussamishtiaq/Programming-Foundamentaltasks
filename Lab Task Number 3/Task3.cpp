#include<iostream>
using namespace std;
int main(){
   int exam,programs_done;
   cout<<"Enter the value of exam:";
   cin>>exam;
cout<<"Enter the value of Programe Done:";
cin>>programs_done;
if(exam>=60&&programs_done>=10){
    printf("Passed");
}
else{
    printf("Failed.");
}
}