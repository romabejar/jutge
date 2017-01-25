#include <iostream>
#include <string>

const std::string HOT = "it\'s hot";
const std::string OK = "it\'s ok";
const std::string COLD = "it\'s cold";
const std::string BOIL = "water would boil";
const std::string FREEZE = "water would freeze";

int main(){
    int n;
    std::cin >> n;
    if(n > 30) std::cout << HOT << std::endl;
    else if(n < 10) std::cout << COLD << std::endl;
    else std::cout << OK << std::endl;
    if(n <= 0) std::cout << FREEZE << std::endl;
    else if(n >= 100) std::cout << BOIL << std::endl;
}
