#include "line.h"
#include <iostream>
using namespace std;

int main()
{
    cout << "Constructors for Four Lines: " << endl;
    Line l1;
    Line l2(1, 2, 3);
    Line l3(4, 5);
    Line l4(6);

    cout << "Line 1: " << endl;
    cout << "Point: (" << l1.GetXCoord() << ", " << l1.GetYCoord() << ")" << endl;
    cout << "Slope: " << l1.GetSlope() << endl;
    
    cout << "\nLine 2: " << endl;
    cout << "Point: (" << l2.GetXCoord() << ", " << l2.GetYCoord() << ")" << endl;
    cout << "Slope: " << l2.GetSlope() << endl;

    cout << "\nLine 3: " << endl;
    cout << "Point: (" << l3.GetXCoord() << ", " << l3.GetYCoord() << ")" << endl;
    cout << "Slope: " << l3.GetSlope() << endl;

    cout << "\nLine 4: " << endl;
    cout << "Point: (" << l4.GetXCoord() << ", " << l4.GetYCoord() << ")" << endl;
    cout << "Slope: " << l4.GetSlope() << endl;

    cout << "\nIntersection Point of Lines: ";
    l2.Intersection(l3); // Change call and parameters to check different lines

    cout << "Y Intercept: " << l3.yIntercept() << endl; // Change call to check different lines

    cout << "\nPerpendicular Line to Line 3: ";
    Line myPerpLine = l3.GetPerpendicular(); // Creating my new line that will be perpendicular
    cout << "\nLine 3: " << endl;
    l3.PrintSlopeIntercept();
    cout << "My Perpendicular Line: " << endl;
    myPerpLine.PrintSlopeIntercept();
    
    cout << "\nPoint Slope Form of the Lines: " << endl;
    cout << "Line 1: ";
    l1.PrintPointSlope();
    cout << "Line 2: ";
    l2.PrintPointSlope();
    cout << "Line 3: ";
    l3.PrintPointSlope();
    cout << "Line 4: ";
    l4.PrintPointSlope();
    
    cout << "\nSlope Intercept Form of the Lines: " << endl;
    cout << "Line 1: ";
    l1.PrintSlopeIntercept();
    cout << "Line 2: ";
    l2.PrintSlopeIntercept();
    cout << "Line 3: ";
    l3.PrintSlopeIntercept();
    cout << "Line 4: ";
    l4.PrintSlopeIntercept();
    
    cout << "\nStandard Form of the Lines: " << endl;
    cout << "Line 1: ";
    l1.PrintStandard();
    cout << "Line 2: ";
    l2.PrintStandard();
    cout << "Line 3: ";
    l3.PrintStandard();
    cout << "Line 4: ";
    l4.PrintStandard();

    cout << "\nChanging Line... " << endl; // Change the calls and parameters to check the different lines
    l4.SetXCoord(-17); // In this case, we are changing line 4
    l4.SetYCoord(-3.45);
    l4.SetSlope(1.3);
    cout << "New Line: " << endl;
    cout << "Point: (" << l4.GetXCoord() << ", " << l4.GetYCoord() << ")" << endl;
    cout << "Slope: " << l4.GetSlope() << endl;
    cout << "Point Slope Form: ";
    l4.PrintPointSlope();
    cout << "Slope Intercept Form: ";
    l4.PrintSlopeIntercept();
    cout << "Standard Form: ";
    l4.PrintStandard();

};
