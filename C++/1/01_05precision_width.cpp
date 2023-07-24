#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(void)
{
	double d = sqrt(2.0);
	
	cout << "precision control:" << endl;
	for(int i = 0; i < 5; i++)
		cout << setprecision(i) << d << endl;
	cout << "current precision: " << cout.precision() << endl;
	cout << "current width: " << cout.width() << endl;
	cout << setw(6) << d << endl;
	cout << setfill('*') << setw(10) << d << endl;
	
	return 0;
}
