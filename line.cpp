#include "line.h"
#include <iostream>
using namespace std; 

Line::Line() // Constructor 1
{
    XCoord = 0;
    YCoord = 0;
    slope = 1;
}

Line::Line(double x, double y, double s) // Constructor 2
{
    XCoord = x;
    YCoord = y;
    slope = s;
}

Line::Line(double y, double s) // Constructor 3
{
    XCoord = 0;
    YCoord = y;
    slope = s;
}

Line::Line(double s) // Constructor 4
{
    XCoord = 0;
    YCoord = 0;
    slope = s;
}

void Line::PrintPointSlope() // y - y1 = m(x - x1)
{
    cout << "y - " << YCoord << " = " << slope << "(x - " << XCoord << ")" << endl;
}

void Line::PrintSlopeIntercept() // y = mx + b
{
    double b = (-slope*XCoord + YCoord);
    cout << "y = " << slope << "x + " << b << endl;
}

void Line::PrintStandard() // Ax + By = C
{
    double b = yIntercept();
    cout << -(slope) << "x + " << "y = " << b << endl;
}

Line Line::GetPerpendicular()
{
    // Inverse Slope
    double s = -1 * (1/slope);

    return Line(XCoord, YCoord, s);
}

void Line::Intersection(Line l2)
{
    if(slope == l2.slope)
    {
        cout << "N/A" << endl;
        return;
    }

    double x = (l2.yIntercept() - yIntercept()) / (slope - l2.GetSlope());
    double y = l2.GetSlope() * x + l2.yIntercept();

    cout << "(" << x << ", " << y << ")" << endl;

}

double Line::yIntercept()
{
    return (-1 * slope * XCoord + YCoord);
}

double Line::GetXCoord()
{
    return XCoord;
}

void Line::SetXCoord(double x)
{
    XCoord = x;
}

double Line::GetYCoord()
{
    return YCoord;
}

void Line::SetYCoord(double y)
{
    YCoord = y;
}

double Line::GetSlope()
{
    return slope;
}

void Line::SetSlope(double s)
{
    slope = s;
}