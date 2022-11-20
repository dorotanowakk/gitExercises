#include<iostream>
#include<cmath>
using namespace std;

int main(){
    float side1;
    float side2;
    float side3;
    float perimeter;

    std::cout << "Please enter side1:\n> ";
    std::cin >> side1;

    std::cout << "Please enter side2:\n> ";
    std::cin >> side2;

    std::cout << "Please enter side3:\n> ";
    std::cin >> side3;

    perimeter = side1+side2+side3;

    std::cout << "The perimeter is equal to: " << perimeter;


return 0;
}
