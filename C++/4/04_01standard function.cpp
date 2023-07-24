#include <iostream>
using namespace std;
int add(int a, int b);
int main(void)
{
	int n;
	int *sum;
	
	cin >> n;
	sum = new int[n];
	for(int i = 0; i < n; i++)
	{
		int a, b;
		cin >> a >> b;
		sum[i] = add(a, b);
	}
	for(int i = 0; i < n; i++)
		cout << sum[i] << " " << endl;
	cout << endl;
	
	return 0;
}

int add(int a, int b)
{
	return (a + b);
}
