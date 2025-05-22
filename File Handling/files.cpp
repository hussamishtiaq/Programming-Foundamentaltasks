#include<fstream>
using namespace std;
int main(){
ofstream file("Students.txt");
file<<"Names:Hussam,Zeeshan,Wahid";
file.close();
return 0;
}