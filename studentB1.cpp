#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int base,height;
    float Area;

    std::cout << "Please enter base:\n> ";
    std::cin >> base;

    std::cout << "Please enter hieght:\n> ";
    std::cin >> height;

    Area = 0.5*base*height;

    std::cout << "Area is equal to:" << " " << Area;



    return 0;

}
