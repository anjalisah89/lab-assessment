#include<iostream>
using namespace std;
#define PI 3.14159
int main() {

   int radius;
   float area, circumference;

   cout << "\nEnter radius of circle: ";
   cin >> radius;

   area = PI * radius * radius;
   cout << "\nArea of circle : " <<  area << endl;;

   circumference = 2 * PI * radius;
   cout << "\nCircumference : " << circumference << endl;;

   return 0;
}

