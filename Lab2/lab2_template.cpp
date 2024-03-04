#include <iostream>
#include <math.h>
using namespace std;
template <typename T>
    T radius(T *x,T *y);

template <typename T>
    T angle(T *x, T *y);

int main() {

float x, y;
int k, t;
    cout << "enter the x coordinate (float): "; cin >> x;
    cout << "enter the y coordinate (float): "; cin >> y;
    cout << "  radius = " << radius(&x, &y) << '\n';
    cout << "  angle = "  << angle(&x, &y)  << '\n';

    cout << "enter the x coordinate (int): "; cin >> k;
    cout << "enter the y coordinate (int): "; cin >> t;
    cout << "  radius = " << radius(&k, &t) << '\n';
    cout << "  angle = "  << angle(&k, &t)  << '\n';

    return 0;
}

template <typename T>
T radius(T *x,T *y) {
    return sqrt((*x)*(*x) + (*y)*(*y));
}

template <typename T>
T angle(T *x,T *y) {
     return atan((*y) / (*x)) * (180/M_PI);

}
