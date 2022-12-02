#include<iostream>
#include<cmath>
using namespace std;

/**********************************************
* Method to calculate third angle of triangle
* it returns in degree: 180 - ang1 - ang2
*
* you can prevent method from returning negative value (additional step)
*/
float findThirdAngle(float ang1, float ang2) {
   float angle;
   angle = 180 -ang1-ang2;
   return angle;
    //TODO STUDENT A
}

/**********************************************
* Method to calculate perimeter of triangle
* it returns sum of all sides
*
* you can check if each of sides measure is smaller then sum of rests (additional step)
* all rules: side1 < side2 + side3, side2 < side 1 + side3, side 3 < side 1 + side2
*/
float findTrianglePerimeter(float side1, float side2, float side3) {
    float peri;
    peri = side1+side2+side3;
    cout<<peri;

    return peri;

}


float findTriangleArea(float base, float height) {
    //TODO STUDENT A
    float S,Area;
    S = (base*height)/2;
    Area =sqrt(S*base*height);
    cout<<Area;
    return Area;
}

/**********************************************
* Method to calculate area of triangle
* you have to check and use Heron's formula
* (you need to use cmath library)
*/

void findThirdAngleUI() {
    //TODO STUDENT A
    float base,height;
    cout<<"please enter your base___"<<endl;
    cin>>base;
    cout<<"please enter your height"<<endl;
    cin>>height;
    findTriangleArea(base,height);
}

/**********************************************
* Method gets triangle's base and height from user,
* and uses findTriangleArea and shows result
*/

void findTrianglePerimeterAndAreaUI() {
    float ang1 =4,ang2 =6, ang3 =8;
    float bas =4,heig =8;
    findTrianglePerimeter(ang1,ang2,ang3);
    findTriangleArea(bas,heig);
    //TODO STUDENT A
}


int main()
{

    findThirdAngleUI();
    findTrianglePerimeterAndAreaUI();
    //TODO STUDENT A and STUDENT B
    //check written UI methods in second part of exercise

    return 0;
}
