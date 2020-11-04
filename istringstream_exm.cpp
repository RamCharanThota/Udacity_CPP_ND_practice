#include<iostream>
#include<sstream>
#include<string>

using std::istringstream;
using std::string;
using std::cout;

int main(){
    string count ={"1 ,2 ,3 ,4 ,5 ,"};
    istringstream my_stream(count);
    
int n;
char c;

    while(my_stream>>  n>>c){
        cout << "That stream was successful:" << n << " " << c << "\n";
    }
  

    return 0;
}