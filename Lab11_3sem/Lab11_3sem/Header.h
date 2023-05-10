#include <iostream>
#include <math.h>

class geom {
protected:
	double x;
public:
	geom(double a = 0) { x = a; }
	virtual double plo() = 0; // виртуальная ф-ия
	virtual double obe() = 0;
};

class kreis: public geom
{
public:
	kreis(double xn) : geom(xn) {};
	double plo() { return (3.14 * x * x); }
	double obe() { return 0; };
};

class pr: public geom
{
protected:
	double y;
public:
	pr(double xn, double yn) : geom(xn), y(yn) {};
	double plo() { return x * y; }
	double obe() { return 0; };

};

class treug : public geom
{
protected:
	double y, z;
public:
	treug(double xn, double yn, double zn) : geom(xn), y(yn), z(zn) {};
	double plo() {
		double p;
		p = (x + y + z) / 2;

		return sqrt(p * (p - x) * (p - y) * (p - z));
	}
	double obe() { return 0; };

};

class parallelelepipipid : public geom 
{
protected:
	double y, z;
public:
	parallelelepipipid(double xn, double yn, double zn) : geom(xn), y(yn), z(zn) {};
	double plo() { return x * y; };
	double obe() {
		return x * y * z;
	}
};

class cil : public geom
{
protected:
	double y;
public:
	cil(double xn, double yn) : geom(xn), y(yn) {};
	double plo() { return 2 * 3.14 * x; };
	double obe() {
		return x * y * 2 * 3.14;
	}
};