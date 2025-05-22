#include<iostream>
using namespace std;
int main(){
    int num1;
    float num2;
    char op;
    float store;
    char continues='Y';

     while(continues=='Y'||continues=='y'){
    cout<<"Enter the first number:";
    cin>>num1;
    cout<<"Enter the operator from this(+,_,/,*,%):";
    cin>>op;
    cout<<"Enter the Second number:";
    cin>>num2;
   
    if(op=='+'||op=='-'||op=='/'||op=='*'||op=='%'){

    switch(op){
        case '+':
        store=num1+num2;
        cout<<num1<<'+'<<num2<<"="<<store;
        break;
         case '-':

        cout<<num1<<'-'<<num2<<"="<<num1-num2;
        break;
         case '*':
        cout<<num1<<'*'<<num2<<"="<<num1*num2;
        break;
         case '/':
         if(num2!=0)
{
        cout<<num1<<'/'<<num2<<"="<<num1/num2;
        break;
    }
    else{
        cout<<"undefined";
break;
    }
         case '%':
        cout<<num1<<'%'<<num2<<"="<<num1%(int)num2;
        break;
    }
    }
    else{
        cout<<"Please enter the mentioned operators";
    }
    cout<<"\nDo You want to perform next Press Y other wise N";
    cin>>continues;
    }

    
return 0;
}


