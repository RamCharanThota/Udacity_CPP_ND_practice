#include <iostream>
#include<string>
#include<vector>

int main(){
    std::vector< std::string> brothers={"Brahmi","Manju","china"};

    for (std::string const& brother:brothers){
        std::cout << brother<<std::endl;

    }
}