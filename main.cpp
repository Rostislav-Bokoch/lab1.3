#include <iostream>
#include <cmath>
#include "CEquation.h"

using namespace std;

int main() {
    CEquation *equation = new CEquation (0.1722, 6.33, 3.25 * pow(10, -4));

    cout << Equation (*equation) << endl;
    return 0;
}
