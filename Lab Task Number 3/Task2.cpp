#include<iostream>
using namespace std;
int main(){
   double expenses,savings;
   cout<<"Enter your savings:";
   cin>>savings;
   cout<<"Enter your expenses:";
   cin>>expenses;
  
   if(expenses==savings){
    expenses=expenses-savings;
cout<<"Solvent";
printf("The Expenses are %f",expenses);
   }
   else{
printf("Bankrupt");
   }
}