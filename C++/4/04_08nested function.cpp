#include <iostream>
using namespace std;
int gcd(int x, int y);		// greatest common divisor
int lcm(int x, int y);		// lowest common multiple

int main(void)
{
	int a, b;
	
	cin >> a >> b;
	cout << "gcd = " << gcd(a, b) << endl;
	cout << "lcm = " << lcm(a, b) << endl;
	
	return 0;
}

int gcd(int x, int y)
{
	int t = x % y;
	
	while(t != 0)
	{
		x = y;
		y = t;
		t = x % y;
	}
	
	return y;
}

int lcm(int x, int y)
{
	return (x * y / gcd(x, y));
}
