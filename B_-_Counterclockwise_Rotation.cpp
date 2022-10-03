#include <iostream>
#include <bits/stdc++.h>
#include <complex>
using namespace std;
typedef complex<double> point;
#define x real()
#define y imag()
#define PI 3.1415926535897932384626
void displayPoint(point P)
{
        cout << fixed << setprecision(10) << P.x << '\n';
        cout << fixed << setprecision(10) << P.y << '\n';
}
 
point rotate(point P, point Q, double theta)
{
    return (P-Q) * polar(1.0, theta) + Q;
}
 
int main()
{
        long double a, b, d;
        cin >> a >> b >> d;
    point P(a, b);
    point Q((long double)0, (long double)0);
 
    // Angle of rotation = 90 degrees
    double theta = d*(PI/180);
     
    point P_rotated = rotate(P, Q, theta);
    displayPoint(P_rotated);
 
    return 0;
}