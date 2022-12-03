//
// Created by x0lotl on 03.12.22.
//

#pragma once

#include <functional>

double simpson(double a, double b, int n, const std::function<double (double)> &function);