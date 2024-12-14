
#include "pch.h"
#include "framework.h"
#include "lib.h"
#include <iostream>
//круг,квадрат,треугольник
double PloshCircle(double r) { return 3.14 * r * r; }
double PloshKvadrat(double a) { return a * a; }
double PloshTrangle(double a, double b) { return 0.5 * a * b; }
double PerimetrCircle(double r) { return 2 * 3.14 * r; }
double PerimetrKvadrat(double a) { return 4 * a; }
double PerimetrTrangle(double a, double b, double c) { return a + b + c; }
