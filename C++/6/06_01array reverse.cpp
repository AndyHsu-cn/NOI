#include <iostream>
using namespace std;

int main(void)
{
	int n;
	int * parr;
	
	cin >> n;
	parr = new int[n];
	for(int i = 0; i < n; i++)
		cin >> parr[i];
	for(int i = n-1; i >= 0; i--)
		cout << parr[i] << "   ";
	cout << endl;
		
	return 0;
}
