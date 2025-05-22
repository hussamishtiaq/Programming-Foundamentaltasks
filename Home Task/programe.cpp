// #include<iostream>
// #include<string>
// #include<cstdio>
// using namespace std;
  
    
// int main(){

//  string a,b;
//  cin>>a;
// istream& ignore( streamsize n = 1, int delim = EOF );
//  cout<<a;
// getline(cin,b);//Buffer value erro cout<<a<<endl;
//   cout<<b<<endl;

   
//   return 0;
// }
#include <iostream>
#include <string>
#include <limits>  // Needed for numeric_limits
using namespace std;
  
int main() {
    string a, b;

    cout << "Enter value for a: ";
    cin >> a;
    // Clear the input buffer by ignoring everything until the newline
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    cout << "Enter value for b: ";
    getline(cin, b);
    
    cout << "\nYou entered:" << endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    
    return 0;
}
