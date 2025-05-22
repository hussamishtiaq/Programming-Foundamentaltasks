#include<iostream>
using namespace std;
// Function declarations
// Function Declaration for sum/add
int add(int,int,int);
// // Function Declaration for Even and Odd
bool EvenOdd(int a)
// Function Declaration for Average of two numbers
int average(int,double);
// Startin Main
int main(){
    // 
    int a,a1,a3,b,c ,sum,averages,result;
    double d;
    // Value Enter for te sum starts;
    cout<<"Enter the First number:\n";
    cin>>a;
 cout<<"Enter the Second number:\n";
    cin>>b;
 cout<<"Enter the Third number:\n";
    cin>>c;
    // Value Enter for the sum ends
    // Value enter for the average starts
     cout<<"Enter the First number to calculate the average:\n";
    cin>>a1;
     cout<<"Enter the second number to calculate the average:\n";
    cin>>d;
    // Value enter for the average ends
    //Value enter for to check the number is even or odd starts
cout<<"Enter a value of to check :";
        cin>>a;
//Value enter for to check the number is even or odd ends
    sum=add(a,b,c);//Function call for sum
      cout<<"Sum of the three numbers "<<a<<" ,"<<b<<", "<<c<<" is: "<<sum<<endl;
    //   
 averages=average(a1,d);//Function call for average
    cout<<"Sum of the two numbers "<<a<<" ,"<<d<<" is: "<<averages<<endl;
    // 
        result=EvenOdd(a);//Function call for Even odd
        if(result){
            cout<<"The number is even\n";
        }
        else{
            cout<<"The number is odd\n";
        }
        // 

}
// Function Definations
// Function Defination for sum/add
int add(int x,int y, int z){
    
    int sum =x+y+z;
    return sum;
}
// Function defination for Even and Odd
bool EvenOdd(int a){
    return a%2==0;
    }
//Function defination for Average of a Function 
int average(int x,double y){
    int average =((x+y)/2);
    return average;
    
}