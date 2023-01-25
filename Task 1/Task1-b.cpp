#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x0 = 0; //initial value of x
    double y0 = 0; //initial value of y
    double xf = 1; //final value of x
    double y;
    for (double x = x0; x <= xf; x += 0.1) {
        y = (pow(x,2))/2 + x - 0.5;
        cout << "x: " << x << ", y: " << y << endl;
    }
    return 0;
}

