#include "evklid.h"

#include <cmath>

ArithmVectorN::ArithmVectorN()
{
	for (int i = 0; i < N; i++)
	{
		arr[i] = 0;
	}
}
double& ArithmVectorN::operator[](int index)
{
	return arr[index];
}
//
ArithmVectorN ArithmVectorN::operator+(ArithmVectorN b)
{
	ArithmVectorN res;
	for (int i = 0; i < N; i++)
	{
		res[i] = this->arr[i] + b[i];
	}
	return res;
}
ArithmVectorN ArithmVectorN::operator-(ArithmVectorN b)
{
	ArithmVectorN res;
	for (int i = 0; i < N; i++)
	{
		res[i] = this->arr[i] - b[i];
	}
	return res;
}
ArithmVectorN ArithmVectorN::operator*(double b)
{
	ArithmVectorN res;
	for (int i = 0; i < N; i++)
	{
		res[i] = this->arr[i] * b;
	}
	return res;
}
ArithmVectorN ArithmVectorN::operator/(double b)
{
	ArithmVectorN res;
	for (int i = 0; i < N; i++)
	{
		res[i] = this->arr[i] / b;
	}
	return res;
}
ArithmVectorN& ArithmVectorN::operator+=(ArithmVectorN b)
{
	for (int i = 0; i < N; i++)
	{
		this->arr[i] += b[i];
	}
	return *this;
}
ArithmVectorN& ArithmVectorN::operator-=(ArithmVectorN b)
{
	for (int i = 0; i < N; i++)
	{
		this->arr[i] -= b[i];
	}
	return *this;
}
//
bool ArithmVectorN::operator==(ArithmVectorN b)
{
	for (int i = 0; i < N; i++)
	{
		if (this->arr[i] != b[i])
			return false;
	}
	return true;
}
bool ArithmVectorN::operator!=(ArithmVectorN b)
{
	for (int i = 0; i < N; i++)
	{
		if (this->arr[i] != b[i])
			return true;
	}
	return false;
}
//
double ArithmVectorN::abs()
{
	double res = 0.0;
	for (int i = 0; i < N; i++)
	{
		res += this->arr[i] * this->arr[i];
	}
	res = std::sqrt(res);
	return res;
}
//
std::ostream& operator<< (std::ostream& out, ArithmVectorN a)
{
	for (int i = 0; i < N; i++)
	{
		out << a[i] << " ";
	}
	out << '\n';
	return out;
}
std::istream& operator>> (std::istream& in, ArithmVectorN& a)
{
	for (int i = 0; i < N; i++)
	{
		in >> a[i];
	}
	return in;
}
