class Line {

public: 

Line();
Line(double, double, double);
Line(double, double);
Line(double);

void PrintPointSlope();
void PrintSlopeIntercept();
void PrintStandard();
Line GetPerpendicular();
void Intersection(Line);

double GetXCoord();
void SetXCoord(double);

double GetYCoord();
void SetYCoord(double);

double GetSlope();
void SetSlope(double);

double yIntercept();

private: 

double XCoord;
double YCoord;
double slope;

};
