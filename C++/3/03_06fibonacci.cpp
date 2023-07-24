#include <iostream>
using namespace std;

int main(void)
{
	long long fib[101];
	fib[1] = fib[2] = 1; 
	
	for(int i = 3; i <= 100; i++)
		fib[i] = fib[i-1] + fib[i-2];
	cout << "fib[100] = " << fib[100] << endl;
	
	return 0;
}
