#include <iostream>
using namespace std;

int main(void)
{
	int n;
	int factorial = 1;
	
	cin >> n;
	for(int i = 1; i <= n; i++)
		factorial *= i; 
	cout << n << "! = " << factorial << endl;
	
	return 0;
}
