#include<iostream>
using namespace std;

/**********************************************
* Method to calculate third angle of triangle
* it returns in degree: 180 - ang1 - ang2
*
* you can prevent method from returning negative value (additional step)
*/
float findThirdAngle(float ang1, float ang2) {
    //TODO STUDENT A
    return 180 - ang1 - ang2;

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
     return sum;}

/**********************************************
* Method to calculate area of triangle
* it returns in: a (base) * h (height)
*/
float findTriangleArea(float base, float height) {
    //TODO STUDENT A
}

/**********************************************
* Method to calculate area of triangle
* you have to check and use Heron's formula
* (you need to use cmath library)
*/
float findTriangleArea(float side1, float side2, float side3) {
    //TODO STUDENT B
}

/**********************************************
* Method gets 2 angles from user, if sum of angles
* exceeds 180, it shows error message,
* otherwise it uses findThirdAngle and shows result
*/
void findThirdAngleUI() {
    //TODO STUDENT A
}

/**********************************************
* Method gets triangle's base and height from user,
* and uses findTriangleArea and shows result
*/
void findTriangleAreaUI() {
    //TODO STUDENT B
}

/**********************************************
* Method gets triangle's sides from user,
* and uses findTrianglePerimeter and findTriangleArea and shows result
*
* you can check rules (the same as in findTrianglePerimeter)
* and show error message if sizes don't meet conditions (additional step)
*/
void findTrianglePerimeterAndAreaUI() {
    //TODO STUDENT A
}

 
int main()
{
    //TODO STUDENT A and STUDENT B
    //check written UI methods in second part of exercise

    return 0;
}
