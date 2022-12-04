//
// Created by x0lotl on 03.12.22.
//

#pragma once

#include <functional>

double simpson(double a, double b, double(*function)(double, double, double), double eps, double aForFunc, double bForFunc);