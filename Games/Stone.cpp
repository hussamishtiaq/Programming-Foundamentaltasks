#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;


int choice(){
int option;
 cout<<"Enter Your move from the following option:"<<endl;
    cout<<"1.Stone"<<endl;
    cout<<"2.paper"<<endl;
    cout<<"3.scissor"<<endl;
    cin>>option;
return option;
}



void checker(int option){
     if(option!=1&&option!=2&&option!=3)
    {
        cout<<"invalid option"<<endl;
    }
    else{
    int com=rand()%3+1;
    if(com==option)
    {
        cout<<"computer value:"<<com<<endl;
        cout<<"draw"<<endl;
    }
    else{
        if(com==1 && option==2)
        {
            cout<<"computer value:"<<com<<endl;
            cout<<"user win"<<endl;
        }else if(com==2 && option ==1)
        {
            cout<<"user value:"<<com<<endl;
            cout<<"computer win"<<endl;


        }
        else if(com==2 && option==3)
        {
        cout<<"computer value:"<<com<<endl;
        cout<<"user win"<<endl;
        }
         else if(com==3&& option==2)
        {
        cout<<"computer value:"<<com<<endl;
        cout<<"computer win"<<endl;
        }
        else if(com==3&& option==1)
        {
        cout<<"computer value:"<<com<<endl;
        cout<<"user win"<<endl;
        }
        else if(com==1 && option==3)
        {
        cout<<"computer value:"<<com<<endl;
        cout<<"computer win"<<endl;
        }
    }
    }
    
}
bool playagain(int con){

    while(true){
    cout<<"you want play the game again"<<endl;
    cout<<"0.no or 1.yes"<<endl;
    cin>>con;
    if(con!=0 && con!=1)
    { 
        cout<<"invalid"<<endl;

    }
    else {
        if(con==1){
return con;
        }
        else{
            return con;
        }
        
    }
    }
}
 

int main(){
    srand(time(0));
    bool con=1;
    while(con){
    int option;
   option=choice();
   checker(option);
   con=playagain(con);
    }
    return 0;
    }





