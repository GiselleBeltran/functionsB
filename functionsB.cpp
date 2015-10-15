// Giselle Beltran
// 14 Oct 2015
// Programming Functions B

#include <iostream>

using namespace std;

double feetToInches(double val);
void feetToInch(double& val);
//converting feet to inches (void doesn't convert feet into inches)

double rectangleArea(double valA, double valB);
void rectangleArea(double valA, double valB, double& valC);
//finding the area of a rectangle

void computeRectangle(double valA, double valB, double& valArea, double& valPerimeter);
//computing the area and perimeter of a rectangle

void  stats(double valA, double valB, double valC, double valD, double& valE, double& valF);
//calculating the sum and average of a set of numbers

void calcAreaPerimeter(double radius, double& area, double& perimeter); 
// calculates the area and circumference (perimeter) of a circle

double calcArea(double length, double width);
//calculates area of a square or rectangle

int main()
{  
    //Problem 1 - converting feet to inches (void doesn't convert feet into inches)
    
    double feet = 2.0;
  
    cout << "There are " << feetToInches(3.0) << " inches in 3 feet." << endl;
    
    cout << "Amount of feet: " << feet << endl;
    feetToInch(feet);
    cout << "Conversion of feet into inches: " << feet << endl;
   
    //Problem 2 - finding the area of a rectangle 
    
    cout << "Area of the rectangle: " << rectangleArea(2.0, 5.0) << endl;
    
    double sideA = 3.0;
    double sideB = 4.0;
    double areaC = 0.0;
    
    cout << "Area before void: " << areaC << endl;
    rectangleArea(sideA, sideB, areaC);
    cout << "Area after void: " << areaC << endl;
   
    //Problem 3 - computing the area and perimeter of a rectangle
    
    double sideD = 4.0;
    double sideE = 5.0;
    double areaF = 0.0;
    double perimeter = 0.0;
    
    cout << "Area: " << areaF << endl;
    cout << "Perimeter: " << perimeter << endl;
    computeRectangle(sideD, sideE, areaF, perimeter);
    cout << "Area: " << areaF << endl;
    cout << "Perimeter: " << perimeter << endl;
    
    
    //Problem 4 - calculating the sum and average of a set of numbers
    
    double statA = 4.0;
    double statB = 6.0;
    double statC = 10.0;
    double statD = 14.0;
    double sum = 0.0;
    double average = 0.0;
    
    cout << "Initial sum of parameters: " << sum << endl;
    cout << "Initial average of parameters: " << average << endl;
    stats(statA, statB, statC, statD, sum, average);
    cout << "New sum of parameters: " << sum << endl;
    cout << "New average of parameters: " << average << endl;
    
    //Problem 5 - calculates the area and circumference (perimeter) of a circle
    double radius = 3.0;
    double circleArea = 0.0;
    double circlePerimeter = 0.0;
    
    cout << "Initial area of a circle: " << circleArea << endl;
    cout << "Initial perimeter of a circle: " << circlePerimeter << endl;
    calcAreaPerimeter(radius, circleArea, circlePerimeter);
    cout << "New area of a circle: " << circleArea << endl;
    cout << "New perimeter of a circle: " << circlePerimeter << endl;
    
    //Problem 6 - calculates area of a square or rectangle
    cout << "Area: " << calcArea(5.0, 10.0) << endl;
   
    
    
    return 0;
}
double feetToInches(double val)
{
   double convert;
   convert = (val * 12.0);
   return convert;
    
}

void feetToInch(double&  val)
{
     val = (val * 12.0);
}

double rectangleArea(double valA, double valB)
{
    double area = valA * valB;
    return area;
}



void rectangleArea(double valA, double valB, double& valC)
{
    valC = valA * valB;
}


void computeRectangle(double valA, double valB, double& valArea, double& valPerimeter)
{
    valArea = valA * valB;
    valPerimeter = (valA * 2 ) + ( valB * 2 );
}


void  stats(double valA, double valB, double valC, double valD, double& valE, double& valF)
{
    valE = (valA + valB + valC + valD);
    valF = (valE / 4.0);
}

void calcAreaPerimeter(double radius, double& area, double& perimeter)
{
    area = ((radius * radius ) * 3.14);
    perimeter = ((2 * 3.14) * radius);
}

double calcArea(double length, double width)
{
    double area = (length * width);
    return area;
}

