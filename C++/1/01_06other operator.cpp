#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
	int num;
	int a, b, c;
	
	cin >> num;
	a = ++num;
	b = num++;
	c = num;
	cout << a << setw(6) << b << setw(6) << c << endl;
	b *= 10;
	c /= 10;
	cout << a << setw(6) << b << setw(6) << c << endl;
	
	return 0;
}
