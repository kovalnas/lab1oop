#pragma once
class lab1
{
	double a, b;
public:
	lab1() { a = 1; b = 1; }

	void Fn_b(double x, double y, double z);
	void Fn_a(double x, double y, double z);

	double geta() { return a; }
	double getb() { return b; }
};

