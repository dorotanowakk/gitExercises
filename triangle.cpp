#include<iostream>
#include <cmath>
using namespace std;

/**********************************************
* Method to calculate third angle of triangle
* it returns in degree: 180 - ang1 - ang2
*
* you can prevent method from returning negative value (additional step)
*/
float findThirdAngle(float ang1, float ang2) {
    //TODO STUDENT A
    float sum = 180 - ang1 - ang2;
    return sum;
}

/**********************************************
* Method to calculate perimeter of triangle
* it returns sum of all sides
*
* you can check if each of sides measure is smaller then sum of rests (additional step)
* all rules: side1 < side2 + side3, side2 < side 1 + side3, side 3 < side 1 + side2
*/
float findTrianglePerimeter(float side1, float side2, float side3) {
    //TODO STUDENT B
    float sum = side1 + side2 + side3;
    return sum;
}

/**********************************************
* Method to calculate area of triangle
* it returns in: a (base) * h (height)
*/
float findTriangleArea(float base, float height) {
    //TODO STUDENT A
    float sum = base * height;
    return sum;
}

/**********************************************
* Method to calculate area of triangle
* you have to check and use Heron's formula
* (you need to use cmath library)
*/
float findTriangleArea(float side1, float side2, float side3) {
    //TODO STUDENT B
    float s = ((side1+side2+side3)/2);
    float area = sqrt(s*(s-side1)*(s-side2)*(s-side3));
    return area;
}

/**********************************************
* Method gets 2 angles from user, if sum of angles
* exceeds 180, it shows error message,
* otherwise it uses findThirdAngle and shows result
*/
void findThirdAngleUI(float ang1, float ang2) {
    //TODO STUDENT A
    cout << "Enter the first angle: " << ang1; cin >> ang1;
    cout << "Enter the second angle: " << ang2; cin >> ang2;
    if (ang1 + ang2 > 180) {
        cout << "The sum of angles is more than 180";
    }
    else {
        float sum = findThirdAngle(ang1, ang2);
        cout << "The sum of angles is " << sum;
    }
    
}

/**********************************************
* Method gets triangle's base and height from user,
* and uses findTriangleArea and shows result
*/
void findTriangleAreaUI(float base, float height) {
    //TODO STUDENT B
    cout << "Enter the base of the triangle";
    cin >> base;
    cout << "Enter the height of the triangle";
    cin >> height;
    // Calculate area of the triangle
    float area = ((base * height) / 2);
    return;
}

/**********************************************
* Method gets triangle's sides from user,
* and uses findTrianglePerimeter and findTriangleArea and shows result
*
* you can check rules (the same as in findTrianglePerimeter)
* and show error message if sizes don't meet conditions (additional step)
*/
void findTrianglePerimeterAndAreaUI(float side1,float side2, float side3) {
    //TODO STUDENT A
    cout << "Enter the first angle: " << side1; cin >> side1;
    cout << "Enter the second angle: " << side2; cin >> side2;
    cout << "Enter the third angle: " << side3; cin >> side3;

    float trianglePerimeter = findTrianglePerimeter(side1, side2, side3);
    float triangleArea = findTriangleArea(side1, side2, side3);

    cout << "The triangle Perimeter is: " << trianglePerimeter;
    cout << "The triangle Area is: " << triangleArea;

}

 
int main()
{
    //TODO STUDENT A and STUDENT B
    //check written UI methods in second part of exercise

    // float ang1 = 30, ang2 = 10;
    // float sum = findThirdAngle(ang1, ang2);
    // cout <<"The third angle is: " << sum << "\n";

    // float triangleArea = findTriangleArea(ang1, ang2);
    // cout << "The area of triangle is: " << triangleArea << "\n";


    return 0;
}
