#include <iostream>
#include <cmath>

using namespace std;

double f(double y, double x) {
    return pow(y, 2) * exp(y) - 2 * y;
}

int main() {
    double x0 = 0; //initial value of x
    double y0 = 0.5; //initial value of y
    double h = 0.1; //step size
    double xf = 1; //final value of x
    double y;

    for (double x = x0; x <= xf; x += h) {
        double k1 = h * f(y0, x);
        double k2 = h * f(y0 + k1, x + h);
        y = y0 + (1.0 / 2.0) * (k1 + k2);
        y0 = y;
        cout << "x: " << x << ", y: " << y << endl;
    }

    return 0;
}
