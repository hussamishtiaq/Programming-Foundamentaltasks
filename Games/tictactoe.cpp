#include<iostream>
using namespace std;
int main(){
    char c1,c2,empty;
  int b[9]={0,0,0,0,0,0,0,0,0};
  int b2[9]={0,0,0,0,0,0,0,0,0};
    int box_number_p1,box_number_p2;
    bool check=true;
    while(check){
    //1st row start
    cout<<"\n#";
    cout<<"\t\t#";
   cout<<"\t\t#";
      cout<<"\t\t#";
    // 1  
   cout<<"\n#";
   if(c1||c2){
  if(box_number_p1==1||b[0]==1){
   cout<<"\t"<<c1;
   }
   else if (box_number_p2==1||b2[0]==1){
   cout<<"\t"<<c2;
   }
   else{
    
     cout<<"\t"<<empty;
   
   }
   }
//  2
   cout<<"\t#";
    if(c1||c2){
  if(box_number_p1==2||b[1]==2){
   cout<<"\t"<<c1;
   }
   else if (box_number_p2==2||b2[1]==2){
   cout<<"\t"<<c2;
   }
   else{
    
     cout<<"\t"<<empty;
   
   }
   }
//  3
      cout<<"\t#";
      if(c1||c2){
  if(box_number_p1==3||b[2]==3){
   cout<<"\t"<<c1;
   }
   else if (box_number_p2==3||b2[2]==3){
   cout<<"\t"<<c2;
   }
   else{
    
     cout<<"\t"<<empty;
   
   }
   }
      cout<<"\t#";
    //   
    cout<<"\n#";
    cout<<"\t\t#";
   cout<<"\t\t#";
      cout<<"\t\t#";
    //   
 cout<<"\n#";
 for(int i=1;i<=48;i++){
 cout<<"#";
 }
   cout<<"#"<<endl;

// 1st row end
// 2nd row start
    cout<<"#";
    cout<<"\t\t#";
   cout<<"\t\t#";
      cout<<"\t\t#";
    //   4
   cout<<"\n#";
  if(c1||c2){
  if(box_number_p1==4||b[3]==4){
   cout<<"\t"<<c1;
   }
   else if (box_number_p2==4||b2[3]==4){
   cout<<"\t"<<c2;
   }
   else{
    
     cout<<"\t"<<empty;
   
   }
   }
//   5 
   cout<<"\t#";
    if(c1||c2){
  if(box_number_p1==5||b[4]==5){
   cout<<"\t"<<c1;
   }
   else if (box_number_p2==5||b2[4]==5){
   cout<<"\t"<<c2;
   }
   else{
    
     cout<<"\t"<<empty;
   
   }
   }
//   6
      cout<<"\t#";
        if(c1||c2){
  if(box_number_p1==6||b[5]==6){
   cout<<"\t"<<c1;
   }
   else if (box_number_p2==6||b2[5]==6){
   cout<<"\t"<<c2;
   }
   else{
    
     cout<<"\t"<<empty;
   
   }
   }
      cout<<"\t#";
    //   
    cout<<"\n#";
    cout<<"\t\t#";
   cout<<"\t\t#";
      cout<<"\t\t#";
    //   
   cout<<"\n#";
    for(int i=1;i<=48;i++){
 cout<<"#";
 }
 
   cout<<"#"<<endl;
//2nd row end
//3rd row start 
    cout<<"#";
    cout<<"\t\t#";
   cout<<"\t\t#";
      cout<<"\t\t#";
    //   7
   cout<<"\n#";
  if(c1||c2){
  if(box_number_p1==7||b[6]==7){
   cout<<"\t"<<c1;
   }
   else if (box_number_p2==7||b2[6]==7){
   cout<<"\t"<<c2;
   }
   else{
    
     cout<<"\t"<<empty;
   
   }
   }
//   8 
   cout<<"\t#";
  if(c1||c2){
  if(box_number_p1==8||b[7]==8){
   cout<<"\t"<<c1;
   }
   else if (box_number_p2==8||b2[7]==8){
   cout<<"\t"<<c2;
   }
   else{
    
     cout<<"\t"<<empty;
   
   }
   }
//    9
      cout<<"\t#";
     if(c1||c2){
  if(box_number_p1==9||b[8]==9){
   cout<<"\t"<<c1;
   }
   else if (box_number_p2==9||b2[7]==9){
   cout<<"\t"<<c2;
   }
   else{
    
     cout<<"\t"<<empty;
   
   }
   }
      cout<<"\t#";
    //   
    cout<<"\n#";
    cout<<"\t\t#";
   cout<<"\t\t#";
      cout<<"\t\t#";
    //   
   
  
   cout<<"\n"<<endl;
// 3rd row end
// Players
cout<<"Put your move player 1:"<<endl;
cin>>c1;
cout<<"At location player1:"<<endl;
cin>>box_number_p1;
// // assigning box
for(int i=1;i<11;i++){
if(box_number_p1==i){
    b[i-1]=box_number_p1;
}
}
// 
// Win check
if(b[0]&&b[1]&&b[2]||b[3]&&b[4]&&b[5]||b[6]&&b[7]&&b[8]||b[0]&&b[3]&&b[6]||b[1]&&b[4]&&b[7]||b[2]&&b[5]&&b[8]||b[0]&&b[4]&&b[8]||b[2]&&b[4]&&b[6]){
    cout<<"Player 1 wins"<<endl;
    break;
}
// 
cout<<"Put your move player 2:"<<endl;
cin>>c2;
cout<<"At location player 2:"<<endl;
cin>>box_number_p2;
// // assigning box
for(int i=1;i<11;i++){
if(box_number_p2==i){
    b2[i-1]=box_number_p2;
}
}
// 
// Win check
if(b2[0]&&b2[1]&&b2[2]||b2[3]&&b2[4]&&b2[5]||b2[6]&&b2[7]&&b2[8]||b2[0]&&b2[3]&&b2[6]||b2[1]&&b2[4]&&b2[7]||b2[2]&&b2[5]&&b2[8]||b2[0]&&b2[4]&&b2[8]||b2[2]&&b2[4]&&b2[6]){
    cout<<"Player 2 wins"<<endl;
    break;
}
// 



    }
    return 0;
    
}