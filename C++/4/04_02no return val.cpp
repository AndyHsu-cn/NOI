#include <iostream>
using namespace std;
void print(int n);

int main(void)
{
	int n;
	
	cin >> n;
	print(n);
	
	return 0;
}

void print(int n)
{
	for(int i = 1; i <= n; i++)
		cout << i << endl;
}
