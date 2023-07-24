#include <iostream>
using namespace std;

template<typename T>
T add(T x, T y);

int main(void)
{
	int a, b;
	float x, y;
	
	cin >> a >> b;
	cin >> x >> y;
	cout << a << " + " << b << " = " << add(a, b) << endl;
	cout << x << " + " << y << " = " << add(x, y) << endl;
	
	return 0;
}

template<typename T>
T add(T x, T y)
{
	return x + y;	
}
