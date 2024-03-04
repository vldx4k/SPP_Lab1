#include <iostream>
#include<math.h>
using namespace std;

float radius(float* x, float* y);
float angle(float* x, float* y);

int main() {

float x, y;
    cout << "enter the x coordinate: "; cin >> x;
    cout << "enter the y coordinate: "; cin >> y;
    cout << "  radius = " << radius(&x, &y) << '\n';
    cout << "  angle = "  << angle(&x, &y)  << '\n';

    return 0;
}

float radius(float* x, float* y) {
    return sqrt((*x)*(*x) + (*y)*(*y));
}

float angle(float* x, float* y) {
    return atan((*y) / (*x))  * (180/M_PI);
}
