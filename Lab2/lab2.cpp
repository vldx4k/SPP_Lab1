#include <iostream>
#include<math.h>
using namespace std;

void radius(float* x, float* y);
void angle(float* x, float* y);

int main() {

float x, y;
    cout << "enter the x coordinate: "; cin >> x;
    cout << "enter the y coordinate: "; cin >> y;
    radius(&x, &y);
    angle(&x, &y);

    return 0;
}

void radius(float* x, float* y) {
    float radius = sqrt((*x)*(*x) + (*y)*(*y));
    cout << "  radius = " << radius << '\n';
}

void angle(float* x, float* y) {
    float theta = atan((*y) / (*x));
    float angle = theta * (180/M_PI);
    cout << "   angle = " << angle << '\n';
}
