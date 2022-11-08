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
    //TODO STUDENT A
    float angle3 = 180 - (ang1 + ang2);

    return angle3;
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
 /*   
    if(side1 < side2 + side3 and side2 < side1 + side3 and side3 < side1 + side2)
    {
        float perim = side1 + side2 + side3;
        cout << ("Perimeter is: " >> perim);
        return perim;
        }
    else
        {
        cout << ("Error sides rule broken");
        }
    
}
        cout >> ("Perimeter is: perim");
        }
    else
        {
        cout >> ("Error sides rule broken");
        }
        return perim;
    }
*/

float findTriangleArea(float base, float height) {
   float AreaSum = 0.5 * base * height;
   return AreaSum; 
}
/**********************************************
* Method to calculate area of triangle
* it returns in: a (base) * h (height)
*/
/**********************************************
* Method to calculate area of triangle
* you have to check and use Heron's formula
* (you need to use cmath library)
*/

float findTriangleArea(float side1, float side2, float side3) {
    //TODO STUDENT B
    float area, s;
    s = (side1 + side2 + side3) /2
    area = sqr(s*(s-side1* s-side2 * s-side3));
    return area;
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
void findTriangleAreaUI(float h, float b) {
    //TODO STUDENT B
    area = (b /2) * h;
    return area;
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
       
/*
    //Evaluate findTrianglePerimeter - Student B
    float s1 = 25, s2 = 50, s3 70, area, perim;
    perim = findTrianglePerimeter(s1,s2,s3);
    cout << ("Perimeter of Triangle: " << perim);
*/
    //Evaluate findTriangleAreaUI - Student B;
    float t_base, t_height, area;
    cout << ("Enter triangle base > ");
    cin >> t_base;
    cout << ("Enter triangle height");
    cin >> t_height;
    area = findTriangleAreaUI(t_base, t_height);
    cout << ("Triangle Area is: " << area);

    //Evaluate findTriangleArea Heron's formular - Student B
    float side1, side2, side3, area;
    area = findTriangleArea(side1, side2,side3);
    cout << ("Area of Triangle is: " << area);

    //Evaluate findTriangleArea - Student A
    float base = 20;
    float height = 30;

    float TriangleArea = findTriangleArea(base, height);
     
    std::cout<< "Area of triangle =" << TriangleArea << std::endl;

    return 0;
}
