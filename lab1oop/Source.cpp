#include <iostream>
#include <iomanip>
#include "Math.h"
#include "lab1.h"

using namespace std;

int main()
{
    double x, y, z;
    x = 0.48 * 9;
    y = 0.47 * 9;
    z = -1.32 * 9;

    lab1 calc;

    calc.Fn_b(x, y, z);
    calc.Fn_a(x, y, x);

    double a = calc.geta();
    cout << "Value a: " << a << endl;
    double b = calc.getb();
    cout << "Value b: " << b << endl;

    int x_s = -1;
    int x_e = 1;
    double dx = 0.2;

    cout << "\t\t+--------------+--------------+--------------+" << endl;
    cout << "\t\t|       x      |       a      |       b      |" << endl;
    cout << "\t\t+--------------+--------------+--------------+" << endl;

    for (double x = x_s; x < x_e; x += dx)
    {
        calc.Fn_b(x, y, x);
        calc.Fn_a(x, y, z);

        double a = calc.geta();
        double b = calc.getb();

        cout << "\t\t|" << setw(14) << x << "|" << setw(14) << a << "|" << setw(14) << b << "|" << endl;
    }

    cout << "\t\t+--------------+--------------+--------------+" << endl;

    return 0;

}

void lab1::Fn_b(double x, double y, double z)
{
    double b1 = y * pow(abs(pow(abs(x), 0.3) / (z + y) + pow(tan((x + pow(z, 2)) / (2 * x - 1.4)), 2)), 1. / 3);
    double b2 = z * exp(pow(x, 2) - y);
    b = b1 - b2;
}

void lab1::Fn_a(double x, double y, double z)
{
    double a1 = pow(abs(z), 0.2);
    double a2 = 3 + exp(y - x) + sqrt(pow(abs(pow(y, 2) + b), 0.3));
    double a3 = 1 + pow(x, 2) * abs(y - pow(tan(pow(z, 2)), 2));
    a = a1 * (a2 / a3);
}