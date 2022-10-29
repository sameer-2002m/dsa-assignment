#include <iostream>
using namespace std;

//function declaration
float areaC(float radius_circle);

// function definition to calculate area of circle
float areaC(float radius_circle)
{
   float area_circle;
   area_circle = 3.14 * radius_circle * radius_circle;

   return area_circle; //return area
 }

int main() {
   float radius;

   cout << "Enter the radius of circle: ";
   cin >> radius;

   cout << "Area of circle: " << areaC(radius) << endl;

   return 0;
}
