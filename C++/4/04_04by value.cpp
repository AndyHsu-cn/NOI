#include <iostream>
using namespace std;
void swap(int a, int b);

int main(void)
{
	int a, b;
	
	cin >> a >> b;
	cout << "a = " << a << "; b = " << b << endl;
	swap(a, b);
	cout << "a = " << a << "; b = " << b << endl;
	
	return 0;	
}

void swap(int a, int b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}
