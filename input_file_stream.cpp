#include<iostream>
#include<fstream>
#include<string>
int main(){
    std::ifstream my_input_file;
    my_input_file.open("files/1.board");
    if(my_input_file){
        std::cout<<"file successfully opened";

    };

}