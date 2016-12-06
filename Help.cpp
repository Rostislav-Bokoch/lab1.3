#include <cmath>
#include "CEquation.h"
#include "Help.h"

double Equation (CEquation &equation) {
    return 5 * atan(equation.x) - 1/4 * acos(equation.x) * ((equation.x + 3 * fabs(equation.x - equation.y)+equation.x*equation.x) / (fabs(equation.x-equation.y) * equation.z + equation.x * equation.x));
}
