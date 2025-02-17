#include "evklid.h"

int main()
{
	ArithmVectorN arr;
	std::cout << arr;
	std::cin >> arr; //1 2 3 4 5 6 7 8 9 10
	std::cout << arr;
	ArithmVectorN a, b, c;
	for (int i = 0; i < N; i++)
	{
		a[i] = 1;
		b[i] = 2;
	}
	c = a + b;
	std::cout << c;
	c = a - b;
	std::cout << c;
	c = a * 12.5;
	std::cout << c;
	c = a / 25.0;
	std::cout << c;
	c += a;
	std::cout << c;
	c -= b;
	std::cout << c;
	(c += a) += b;
	std::cout << a << b << c;
	c += (a += b);
	std::cout << a << b << c;
	std::cout << a.abs() << '\n';
	a = b;
	a[0] = 12;
	std::cout << a << b; // :), скопировал.
	std::cout << (a==b) << " " << (a != b);
	return 0;
}
