#include <iostream>

int main(){
    int a, b;
    std::cin >> a >> b;
    bool negative = b < 0;
    if(not negative or a%b == 0) std::cout << a/b << " " << a%b << std::endl;
    else std::cout << -((-a)/b)-1 << " " << a-(a%b) << std::endl;
}
