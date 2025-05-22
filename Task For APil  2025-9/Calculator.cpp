#include<iostream>
using namespace std;
int main(){
    int number;
    float floating_number;
    char operator;
    float store_result;
    char contineous_option='Y';

     while(contineous_option=='Y'||contineous_option=='y'){
    cout<<"Enter the first number:";
    cin>>number;
    cout<<"Enter the operatorerator from this(+,_,/,*,%):";
    cin>>operator;
    cout<<"Enter the Second number:";
    cin>>floating_number;
   
    if(operator=='+'||operator=='-'||operator=='/'||operator=='*'||operator=='%'){

    switch(operator){
        case '+':
        store_result=number+floating_number;
        cout<<number<<'+'<<floating_number<<"="<<store_result;
        break;
         case '-':
store_result=number-floating_number;
        cout<<number<<'-'<<floating_number<<"="<<store_result;
        break;
         case '*':
         store_result=number*floating_number;
        cout<<number<<'*'<<floating_number<<"="<<store_result;
        break;
         case '/':
         if(floating_number!=0)
{
    store_result=number/floating_number;
        cout<<number<<'/'<<floating_number<<"="<<store_result;
        break;
    }
    else{
        cout<<"undefined";
break;
    }
         case '%':
         store_result=number%(int)floating_number;
        cout<<number<<'%'<<floating_number<<"="<<store_result;
        break;
    }
    }
    else{
        cout<<"Please enter the mentioned operatorerators";
    }
    cout<<"\nDo You want to perform next Press Y other wise any:";
    cin>>contineous_option;
    }

    
return 0;
}


// Test Cases (Valid Inputs)|      Edge Cases  
// Input	Expected Output |Case	Input	Expected Behavior
// 10 + 5	10+5=15         |Division by zero	10 / 0	undefined
// 20 - 8	20-8=12         |Modulus with a floating-point number	10 % 4.5	May cause unexpected behavior (as modulus should be between integers)
// 7 * 6	7*6=42          |Invalid operator input	5 @ 2	"Please enter the mentioned operators"
// 30 / 5	30/5=6          |Character instead of a number	a + 5	May cause input failure (handle with error message)
// 10 % 3	10%3=1          |Negative numbers	-5 * 4	-5*4=-20
//                          |Large numbers	1000000 * 1000000	Should compute correctly if within int/float range
//                          |Floating-point precision	10 / 3	May produce 3.33333...
//                          |Multiple calculations	User enters Y to continue	Should allow multiple calculations
