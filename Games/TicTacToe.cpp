#include<iostream>
using namespace std;
// Instruction function start
void instruction(){
cout<<"• Players take turns entering a number from 1 to 9 to choose a cell.\n• The board positions are mapped as follows:\n";}
// Instruction function end

//Board Creator function start
void boardcreator(){
int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
    cout<<arr[i][j]<<"|";
}
cout<<"\n------\n";
}
}
//Board Creator function end

int main(){
    instruction();//Display the game instructions
    boardcreator();//Board Creator function
    return 0;
}