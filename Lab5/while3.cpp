#include<iostream>
#include<unistd.h>
using namespace std;
int main()
{
int seconds=10;Please enter an integer in the range 0-10:Please enter an integer in the range 0-10:
;.

cout<<'Countdown Timer:\n';
while(seconds>0){
    cout<<seconds<<"seconds remaining..."<<endl;
    sleep(1);
    seconds--;
}
cout<<"Time's up!"<<endl;
return 0;
}