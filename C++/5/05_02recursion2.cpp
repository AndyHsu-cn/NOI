#include <iostream>
#define SIZE 5
using namespace std;
long factorial(int n);
int main(void)
{
	int n;
	
	cin >> n;
	cout << n <<"!= " << factorial(n) << endl;
	return 0;
}

long factorial(int n)
{
	if(n == 1)
		return 1;
	return n * factorial(n - 1);
}
