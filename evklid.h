#ifndef _EVKLID_
#define _EVKLID_
#include <iostream>

const int N = 10;
class ArithmVectorN
{
	double arr[N];
public:
	ArithmVectorN();
	double& operator[](int index);
	ArithmVectorN operator+(ArithmVectorN b);
	ArithmVectorN operator-(ArithmVectorN b);
	ArithmVectorN operator*(double b);
	ArithmVectorN operator/(double b);
	ArithmVectorN& operator+=(ArithmVectorN b);
	ArithmVectorN& operator-=(ArithmVectorN b);

	bool operator==(ArithmVectorN b);
	bool operator!=(ArithmVectorN b);

	double abs();

	friend std::ostream& operator<< (std::ostream& out, ArithmVectorN a);
	friend std::istream& operator>> (std::istream& in, ArithmVectorN& a);
};

#endif
