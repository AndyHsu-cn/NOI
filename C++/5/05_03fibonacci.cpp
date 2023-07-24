#include <iostream>
using namespace std;
long long fibonacci(int item);

int main(void)
{
	int n;
	
	cin >> n;
	cout << "fibonacci(" << n << ") = " << fibonacci(n);
	
	return 0;
}

long long fibonacci(int item)
{
	if(item == 1 || item == 2)
		return 1;
	return fibonacci(item - 1) + fibonacci(item -2);
}
