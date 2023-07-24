#include <iostream>
using namespace std;

int main(void)
{
	const double pi = 3.14159;
	double r, c, s;
	
	cout << "input radius: " << endl;
	cin >> r;
	c = 2.0 * pi * r;
	s = pi * r * r;
	cout << "circumference: " << c << endl;
	cout << "square: " << s << endl;
	
	return 0;
}
