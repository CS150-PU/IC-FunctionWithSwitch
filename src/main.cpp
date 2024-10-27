//******************************************************************************
// File name:   main.cpp
// Author:      
// Date:        
// Class:       
// Assignment:  
// Purpose:     Gain more experience writing functions and using a switch
//              Your program is to produce the following output when run
//              twice:
//
//              Enter C)ircle or R)ectangle: C
//              Enter radius: 5.0
//              Circle Radius: 5 Circle Area: 78.5397
//
//              Enter C)ircle or R)ectangle: R
//              Enter length: 2.0
//              Enter width: 3.5
//              Rectangle Length: 2 Rectangle width: 3.5 Rectangle Area: 7
// Hours:       
//******************************************************************************

#include <iostream>

using namespace std;

const char SELECT_RECTANGLE = 'R';
const char SELECT_CIRCLE = 'C';

double rectangleArea (double width, double length);
double circleArea (double radius);
char menuSelect ();

int main () {
  double length, width, radius;

  // TODO #2: Call the function menuSelect and save the result
  char selection = menuSelect ();

  // TODO #3: Using a switch statement, test the return value from TODO #2
  //          If the return value is R, ask the user to enter a length and
  //          width. Then output the area of the rectangle

  // TODO #4: Do the same thing for a circle

  switch (selection) {
  case SELECT_RECTANGLE:
    cout << "Enter length: ";
    cin >> length;
    cout << "Enter width: ";
    cin >> width;
    cout << "Rectangle Length: " << length << " Rectangle width: " << width
      << " Rectangle Area: " << rectangleArea (length, width) << endl;
    break;

  case SELECT_CIRCLE:
    cout << "Enter radius: ";
    cin >> radius;
    cout << "Circle Radius: " << radius << " Circle Area: "
      << circleArea (radius) << endl;
    break;
  }

  return EXIT_SUCCESS;
}

double rectangleArea (double length, double width) {
  return length * width;
}

double circleArea (double radius) {
  const double PI = 3.14159;

  return PI * radius * radius;
}

// TODO #1: Write the function definition for menuSelect such that the user
//          can enter a 'R' or 'C' representing a rectangle or a circle.
//          Continue asking the user for valid input using a do-while loop
//          The user interaction is to be:
//          Enter C)ircle or R)ectangle:

char menuSelect () {
  char selection;

  do {
    cout << "Enter C)ircle or R)ectangle: ";
    cin >> selection;
  } while (selection != SELECT_RECTANGLE && selection != SELECT_CIRCLE);

  return selection;
}